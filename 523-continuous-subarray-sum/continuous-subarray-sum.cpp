class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = -1; // to handle sum from index 0
        int sum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (k != 0) sum %= k;
            
            if (mp.find(sum) != mp.end()) {
                if (i - mp[sum] >= 2) // at least two elements
                    return true;
            } else {
                mp[sum] = i;
            }
        }
        return false;
    }
};
