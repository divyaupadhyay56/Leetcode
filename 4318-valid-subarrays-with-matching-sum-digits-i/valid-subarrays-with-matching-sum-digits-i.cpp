class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int n = nums.size();
        int count =0;
        for (int l = 0; l < n; l++) {
            long long sum = 0;
            for (int r = l; r < n; r++) {
                sum += nums[r]; // calculates the sum of subarrays
                if (sum % 10 == x) {   //check last digit
                    long long temp = sum;
                    while (temp >= 10) {  //extract first digit
                        temp /= 10;
                    }
                    
                    if (temp == x) { // check first digit
                        count++;
                    }
                }  
            }
        }
        return count;
    }
};