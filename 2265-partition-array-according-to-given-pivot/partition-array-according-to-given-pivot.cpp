class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result(nums.size(), 0);
        int left = 0, right = nums.size() - 1;
        for(int i=0;i<nums.size();++i){
            if (nums[i] < pivot) {
                result[left] = nums[i];
                left++;
            }
        }
        for(int j=nums.size()-1;j>=0;--j){
            if (nums[j] > pivot) {
               result[right] = nums[j];
               right--;
            }
        }
        
        while (left <= right) {
            result[left] = pivot;
            left++;
        }
        
        return result;
    }
};