class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> oddIndices;  // Store indices of odd numbers
        
        // Collect indices of all odd numbers
        for(int i=0; i<n; i++){
            if(nums[i] % 2 != 0){
                oddIndices.push_back(i);
            }
        }
        
        // If total odd numbers < k, no such subarray exists
        if(oddIndices.size() < k){
            return 0;
        }
        
        int count = 0;
        int m = oddIndices.size();
        
        // Iterate through each window of k odd numbers
        for(int i=0; i<=m-k; i++){
            int leftEvenCount, rightEvenCount;
            
            // Calculate even numbers before first odd in window
            if(i == 0){
                leftEvenCount = oddIndices[i];
            }
            else {
                leftEvenCount = oddIndices[i] - oddIndices[i-1] - 1;
            }
            
            // Calculate even numbers after last odd in window
            if(i + k -1 == m-1){
                rightEvenCount = n - oddIndices[i+k-1] -1;
            } else {
                rightEvenCount = oddIndices[i+k] - oddIndices[i+k-1] -1;
            }
            
            // Number of subarrays from this window
            count += (leftEvenCount + 1) * (rightEvenCount + 1);
        }
        
        return count;
    }
};
