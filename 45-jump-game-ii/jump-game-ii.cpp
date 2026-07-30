class Solution {
public:
    int solve(vector<int>& nums, int idx,vector<int>& memo){
        int n = nums.size();
        int count = 1e9; // Start with a very large number to find the minimum safely
        if(idx >= n-1){
            return 0;
        }
        if(memo[idx] != -1){
            return memo[idx];
        }
        for(int i=1;i<=nums[idx];i++){
            count = min(count, 1+solve(nums,idx+i,memo));
        }
        return memo[idx] = count;

    }
    int jump(vector<int>& nums) {
        vector<int> memo(nums.size(), -1);
        return solve(nums,0,memo);
    }
};
