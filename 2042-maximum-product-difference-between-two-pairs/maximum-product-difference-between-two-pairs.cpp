class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;
        int cnt = abs(nums[0]*nums[1] - nums[n]*nums[n-1]);
        return cnt;
    }
};