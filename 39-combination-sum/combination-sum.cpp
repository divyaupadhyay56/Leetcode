class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>&res,int i,vector<int>&candidates,int target){
        if(target == 0){
            ans.push_back(res);
            return;
        }
        if (i >= candidates.size() || target < 0) {
            return;
        }
        res.push_back(candidates[i]);
        solve(res,i,candidates,target-candidates[i]);
        res.pop_back();
        solve(res,i+1,candidates,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> res;
        solve(res,0,candidates,target);
        return ans;
    }
};