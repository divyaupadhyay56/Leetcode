class Solution {
public:
    unordered_map<int,int> mp;
    int coin_count(vector<int>& coins, int amount){
        if (amount == 0){
            return 0;
        } 
        if (amount < 0){
            return -1;
        } 
        if(mp.find(amount) != mp.end()){
            return mp[amount];
        }
        int n  = coins.size();
        int res = INT_MAX; 
        for (int a : coins) {
            if (amount - a >= 0) {
                int temp = coin_count(coins, amount - a);

                if (temp != -1) {
                    res = min(res, 1 + temp); 
                }
            }
        }
        if(res == INT_MAX) return mp[amount] = -1;
        return mp[amount] = res;
    }
    int coinChange(vector<int>& coins, int amount) {
        return coin_count(coins,amount);
    }
};
