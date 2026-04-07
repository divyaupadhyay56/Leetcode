class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int c = 0;
        for(int i=0;i<nums.size();i++){
            c+= nums[i];
            ans.push_back(c);
        }
        return ans;
    }
};