class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int, long long> mp;
        long long good = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int key = nums[i] - i;
            good += mp[key]; // add count of previous same key (good pairs)
            mp[key]++;
        }

        long long total = (long long)n * (n - 1) / 2;
        return total - good; // bad pairs = total - good pairs
    }
};
