class Solution {
public:
    unordered_map<int,int> mp;
    int solve(vector<int>& cost,int i){
        int n = cost.size();
        if(i>=n) return 0;
        if(mp.find(i) != mp.end()){
            return mp[i];
        }
        return mp[i] = cost[i] + min(solve(cost,i+1),solve(cost,i+2));
        
    }
    int minCostClimbingStairs(vector<int>& cost) {

        return min(solve(cost,0),solve(cost,1));
    }
};
