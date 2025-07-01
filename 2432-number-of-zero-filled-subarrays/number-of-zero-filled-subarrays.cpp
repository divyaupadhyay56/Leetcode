class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count = 0;
        long long zero_count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zero_count++;
                count += zero_count;
            } 
            else {
                zero_count = 0;
            }
        }
        return count;
    }
};
