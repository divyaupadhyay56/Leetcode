class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int Wealth = 0;
        for(auto& customer : accounts) {
            int sum = 0;
            for(int balance : customer) {
                sum += balance;
            }
            Wealth = max(Wealth, sum);
        }
        return Wealth;
    }
};