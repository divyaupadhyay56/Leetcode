class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        if(nums.empty()){
            return false;
        }
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        int mid = nums.size()/2;
        int c = nums[mid];
        if(mp[c] == 1){
            return true;
        }
        return false;
    }
};