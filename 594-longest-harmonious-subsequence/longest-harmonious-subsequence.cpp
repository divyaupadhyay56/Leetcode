class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int j = 0, maxlen = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] - nums[j] > 1) {
                j++;
            }
            if (nums[i] - nums[j] == 1) {
                maxlen = max(maxlen, i - j + 1);
            }
        }
        return maxlen;
    }
};