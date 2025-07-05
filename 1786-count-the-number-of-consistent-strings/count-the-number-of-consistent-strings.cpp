class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> mp;

        // Store allowed characters in map
        for (char c : allowed) {
            mp[c] = 1;
        }
        int count = 0;

        // Check each word
        for (string word : words) {
            bool isConsistent = true;

            // Check if each character is in allowed
            for (char c : word) {
                if (mp.find(c) == mp.end()) {
                    isConsistent = false;
                    break;
                }
            }

            if (isConsistent) count++;
        }

        return count;
    }
};
