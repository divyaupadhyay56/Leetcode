class Solution {
public:
    int maximumGain(string s, int x, int y) {
        if (x < y) {
            // Swap operations to always remove higher gain first
            swap(x, y);
            for (char &c : s) {
                if (c == 'a') c = 'b';
                else if (c == 'b') c = 'a';
            }
        }
        
        int total = 0;
        stack<char> st;
        
        // First remove "ab" if x >= y
        for (char c : s) {
            if (!st.empty() && st.top() == 'a' && c == 'b') {
                st.pop();
                total += x;
            } 
            else {
                st.push(c);
            }
        }
        
        // Prepare string after first removal
        string remaining = "";
        while (!st.empty()) {
            remaining += st.top();
            st.pop();
        }
        reverse(remaining.begin(), remaining.end());
        
        // Now remove "ba"
        for (char c : remaining) {
            if (!st.empty() && st.top() == 'b' && c == 'a') {
                st.pop();
                total += y;
            } 
            else {
                st.push(c);
            }
        }
        
        return total;
    }
};
