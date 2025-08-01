class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> pre;
        for(int i=1;i<=numRows;i++){
            vector<int> temp(i,-1);
            temp[0] = 1;
            temp[i-1] = 1;
            for(int j=1;j<i-1;j++){
                temp[j] = pre[j] + pre[j-1];
            }
            ans.push_back(temp);
            pre = temp;
        }
        return ans;
    }
};