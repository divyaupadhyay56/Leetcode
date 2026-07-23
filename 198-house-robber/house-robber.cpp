class Solution {
public:
    unordered_map<int,int>mp;
    int solve(vector<int>& nums, int i){
        if(i>=nums.size()){
            return 0;
        }
        if(mp.find(i) != mp.end()) {
            return mp[i];
        }
        int steal = nums[i] + solve(nums,i+2);
        int skip = solve(nums,i+1);
        return mp[i] = max(steal,skip);
    }
    int rob(vector<int>& nums) {
        return solve(nums,0);
    }
};
