class Solution {
public:
    string makeFancyString(string s) {
        string str = "";
        int count = 1; 
        str = str + s[0];

        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) { 
                count++;
            } 
            else {
                count = 1; 
            }
            if (count <= 2) {
                str += s[i];
            }
        }

        return str;
    }
};
