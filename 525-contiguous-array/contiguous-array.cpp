class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        mp[0] = -1; // initialize sum 0 at index -1
        
        int maxlen = 0, sum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            // Treat 0 as -1
            if (nums[i] == 0)
                sum += -1;
            else
                sum += 1;
            
            // If this sum has been seen before
            if (mp.find(sum) != mp.end()) {
                maxlen = max(maxlen, i - mp[sum]);
            } else {
                // Store the first occurrence of this sum
                mp[sum] = i;
            }
        }
        
        return maxlen;
    }
};