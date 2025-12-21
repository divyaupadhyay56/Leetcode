class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int rows = strs.size();
        int col = strs[0].size();
        int dlt =0;
        vector<bool> alreadysorted(rows,false); // is col se yeh pta chlega ki prev. col sorted h ya ni

        for(int j=0;j<col;j++){
            bool deleted = false;
            for(int i=0;i<rows-1;i++){
                if(!alreadysorted[i] && strs[i][j]>strs[i+1][j]){
                    dlt++;
                    deleted = true;
                    break;
                }
            }
            if(deleted) continue;
            for(int a=0;a<rows-1;a++){
                alreadysorted[a] = alreadysorted[a] | (strs[a][j]< strs[a+1][j]);
            }
        }
        return dlt;
    }
};