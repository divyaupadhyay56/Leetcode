class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long long total=0;
        sort(nums.rbegin(), nums.rend());
        for(int i=0;i<k;i++){
            if(mul > 0){
                total += (long long) nums[i]*mul;
                mul--;
            }
            else{
                total += (long long) nums[i];
            }
        }
        return total;
    }
};