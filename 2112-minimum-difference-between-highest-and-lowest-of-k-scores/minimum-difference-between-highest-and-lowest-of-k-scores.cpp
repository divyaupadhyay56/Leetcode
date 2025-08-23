class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k == 1) return 0; // Only one student means no difference.

        sort(nums.begin(), nums.end()); // Sort scores in ascending order.
        int minDiff = INT_MAX;

        for (int i = 0; i <= nums.size() - k; ++i) {
            int diff = nums[i + k - 1] - nums[i];
            minDiff = min(minDiff, diff);
        }

        return minDiff;
    }
};
