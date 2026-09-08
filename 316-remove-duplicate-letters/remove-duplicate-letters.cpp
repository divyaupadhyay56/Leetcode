class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> last_idx(26, 0);
        vector<bool> seen(26, false);
        string result = ""; // Used as a stack
        
        // 1. Record the last position where each character appears
        for (int i = 0; i < s.length(); i++) {
            last_idx[s[i] - 'a'] = i;
        }
        
        // 2. Iterate through the string to build the optimal sequence
        for (int i = 0; i < s.length(); i++) {
            char curr = s[i];
            
            // Skip if the character is already in our result
            if (seen[curr - 'a']) continue;
            
            // Maintain monotonic increasing order:
            // Pop the last character if it's larger than curr AND appears again later
            while (!result.empty() && result.back() > curr && last_idx[result.back() - 'a'] > i) {
                seen[result.back() - 'a'] = false;
                result.pop_back();
            }
            
            // Push current character
            result.push_back(curr);
            seen[curr - 'a'] = true;
        }
        
        return result;
    }
};