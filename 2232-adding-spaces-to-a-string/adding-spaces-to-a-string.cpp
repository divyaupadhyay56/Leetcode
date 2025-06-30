class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string str = "";
        int j=0;
        int a = spaces.size();
        for(int i=0;i<s.size();i++){
            
            if(j<a && i == spaces[j]){
                
                str += ' ';
                j++;
            }
            str += s[i];
        }
        return str;
    }
};