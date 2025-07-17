class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = 0;
        for(auto i:nums){
            mp[i]++;

        }
        for(auto c:mp){
            if(c.second == 1){
                ans = c.first;
            }
        }
        return ans;
    }
};