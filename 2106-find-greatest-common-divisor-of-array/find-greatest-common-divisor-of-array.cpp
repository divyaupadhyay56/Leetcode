class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max = nums[0];
        int min = nums[0];
        for(int i=0; i<nums.size();i++){
            if(nums[i]>max){
                max = nums[i];
            }
            else if(nums[i]<min){
                min = nums[i];
            }
        }
        return gcd(min,max);
    }
};