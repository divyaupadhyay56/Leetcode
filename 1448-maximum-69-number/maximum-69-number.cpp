class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);   // integer ko string me convert kiya
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '6') {       // pehla 6 mila to usko 9 bana do
                s[i] = '9';
                break;
            }
        }
        return stoi(s);  // string ko wapas integer banakar return
    }
};
