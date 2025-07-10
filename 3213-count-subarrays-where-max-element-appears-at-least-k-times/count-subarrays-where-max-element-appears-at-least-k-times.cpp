class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        
        // Step 1: Find max value
        int maxVal = *max_element(nums.begin(), nums.end());
        
        long long res = 0;
        int i=0;
        
        // Step 2: Sliding window with map
        for(int j=0; j<n; j++){
            mp[nums[j]]++;
            
            while(mp[maxVal] >= k){
                res += (n - j);
                mp[nums[i]]--;
                i++;
            }
        }
        
        return res;
    }
};
