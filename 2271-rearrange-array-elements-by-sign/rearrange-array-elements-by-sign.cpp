class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> positive;
        vector<int> negative;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
        }
        vector<int> combined;
        for(int i=0;i<positive.size();i++){
            combined.push_back(positive[i]);
            combined.push_back(negative[i]);
        }
        return combined;
    }
};