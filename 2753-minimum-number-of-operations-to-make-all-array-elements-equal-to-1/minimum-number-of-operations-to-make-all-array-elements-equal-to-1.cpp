class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ones = count(nums.begin(), nums.end(), 1);
        if (ones) {
            return n - ones;
        }
        int res = INT_MAX;
        for (int i = 0; i < n; i++) {
            int g = nums[i];
            for (int j = i + 1; j < n; j++) {
                g = gcd(g, nums[j]);
                if (g == 1) {
                    res = min(res, j - i);
                }
            }
        }
        if (res == INT_MAX){
            return -1;
        }
        return res + n - 1;
    }
};