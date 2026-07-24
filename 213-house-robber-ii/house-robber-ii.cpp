class Solution {
public:
    unordered_map<int,int> mp1;
    unordered_map<int,int> mp2;
    int solve(vector<int>& nums, int i,int last,unordered_map<int,int>& mp){
        if(i>last){
            return 0;
        }
        if (mp.find(i) != mp.end()){
            return mp[i];
        }
        int steal = nums[i] + solve(nums,i+2,last,mp);
        int skip = solve(nums,i+1,last,mp);
    
        return mp[i] = max(steal,skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1){
            return nums[0];
        }
        return max(solve(nums,0,n-2,mp1), solve(nums,1,n-1,mp2));
    }
};
