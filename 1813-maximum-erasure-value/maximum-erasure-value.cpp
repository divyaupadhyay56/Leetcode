class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> s;
        int left = 0, currSum = 0, maxSum = 0;
        
        for (int right = 0; right < nums.size(); right++) {
            while (s.count(nums[right])) {
                s.erase(nums[left]);
                currSum -= nums[left];
                left++;
            }
            s.insert(nums[right]);
            currSum += nums[right];
            maxSum = max(maxSum, currSum);
        }
        
        return maxSum;
    }
};