class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> st;
        for (char c : s) {
            if (!st.empty() && st.back().first == c) { //Agar stack empty nahi hai aur 
            //last inserted character (st.back().first) current character ke equal hai,
            // toh uska count badha do (++st.back().second).
                ++st.back().second;
            } else {
                st.push_back({c, 1});
            }
            if (st.back().second == k) { 
                st.pop_back();
            }
        }
        string res;
        for (auto p : st) {
            res.append(p.second, p.first);
        }
        return res;
    }
};