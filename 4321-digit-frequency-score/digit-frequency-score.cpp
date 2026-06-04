class Solution {
public:
    int digitFrequencyScore(int n) {
        if (n == 0) {
            return 0; 
        }

        unordered_map<int,int> mp;

        while (n > 0) {
            int digit = n % 10; 
            mp[digit]++;        
            n = n / 10;        
        }
        int count = 0;
        for(auto c: mp){
            int a = c.first*c.second;
            count = count + a;
        }
        return count;
    }
};