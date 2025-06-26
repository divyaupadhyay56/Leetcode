class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        for(auto& [first,second] :ans){
            if(second%2 != 0){
                return false;
            }
        }
        return true;
    }
};