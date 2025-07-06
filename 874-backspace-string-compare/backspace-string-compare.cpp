class Solution {
public:
    string build(string str) {
        string result = "";
        for (char ch : str) {
            if (ch != '#') {
                result.push_back(ch); // character add kar do
            } 
            else if(!result.empty()){
                result.pop_back(); // backspace, hai toh last character delete
            }
        }
        return result;
    }
    bool backspaceCompare(string s, string t) {
        return build(s) == build(t);
    }
};