class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int total = 0;

        int currMax = 0, maxSum = nums[0];
        int currMin = 0, minSum = nums[0];

        for (int num : nums) {

            // Kadane for maximum subarray
            currMax = max(num, currMax + num);
            maxSum = max(maxSum, currMax);

            // Kadane for minimum subarray
            currMin = min(num, currMin + num);
            minSum = min(minSum, currMin);

            total += num;
        }

        // If all numbers are negative
        if (maxSum < 0)
            return maxSum;

        return max(maxSum, total - minSum);
    }
};