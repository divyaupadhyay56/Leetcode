class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long count = 0;
        long long max = nums[0];
        long long min = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max = nums[i];
            }
            if(nums[i]<min){
                min = nums[i];
            }
        }
        for(int j=0;j<k;j++){
            count = count + (max-min);
        }
        return count;
    }
};