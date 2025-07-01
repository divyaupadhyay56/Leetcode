class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long total = 0;
        long long right_sum =0;
        int ans  =0;
        for (int num : nums) {
            total += num;
        }
        
        long long left_sum = 0;
        for (int i = 0; i < nums.size()-1; i++) {
            left_sum = left_sum+nums[i];

            right_sum = total - left_sum ;
            if(left_sum >=right_sum ){
                ans++;
            }
        }
        return ans;
    }
};