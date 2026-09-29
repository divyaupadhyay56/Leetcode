class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        while (!nums.empty()) {
            sort(nums.begin(), nums.end());
            vector<int> temp;
            for (int i = 0; i < nums.size(); i++) {
                if (i == 0 || nums[i] != nums[i - 1]) {
                    ans.push_back(nums[i]);
                } else {
                    temp.push_back(nums[i]);
                }
            }
            nums = temp;
        }
        return ans;
    }
};