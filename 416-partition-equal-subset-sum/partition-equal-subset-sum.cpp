class Solution {
public:
    int subset_sum(vector<int>& nums, int half_sum, int n){
        vector<bool> dp(half_sum + 1, false);
        dp[0] = true;
        for (int i = 0; i < n; i++) {
            for (int j = half_sum; j >= nums[i]; j--) {
                if (dp[j - nums[i]]) {
                    dp[j] = true;
                }
            }
        }
        return dp[half_sum];
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int total_sum = 0;
        for(int i=0;i<nums.size();i++){
            total_sum += nums[i];
        }
        if(total_sum%2 != 0)return false;
        int half_sum = total_sum/2;

        return subset_sum(nums,half_sum,n);

    }
};
