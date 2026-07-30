class Solution {
public:
    bool solve (vector<int>& nums, int idx,vector<int>& memo){
        int n = nums.size();
        if(idx == n-1) return true;
        if(memo[idx] != -1) return memo[idx] == 1;;
        for(int i=1;i<=nums[idx];i++){
            if(solve(nums,idx+i,memo)){
                memo[idx] = 1; 
                return true;
            }
             
        }
        memo[idx] = 0;
        return false;
    }
    bool canJump(vector<int>& nums) {
        vector<int> memo(nums.size(),-1);
        return solve(nums,0,memo);
    }
};
