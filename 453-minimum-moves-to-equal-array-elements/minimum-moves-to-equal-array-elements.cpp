class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mn = nums[0];
        int ans = 0;
        for(int x : nums) {
            ans += x - mn;
        }
        return ans;
    }
};