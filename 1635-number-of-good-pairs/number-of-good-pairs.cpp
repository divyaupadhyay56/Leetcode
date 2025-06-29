class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int res=0;
        unordered_map<int,int> mp;
        for(auto a:nums){
            res = res+mp[a]++;
        }
        return res;
    }
};