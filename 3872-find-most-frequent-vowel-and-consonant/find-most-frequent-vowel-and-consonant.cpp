class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> mp;
        for(char i: s){
            mp[i]++;
        }
        int max_even =0;
        int max_odd =0;
        for(auto c: mp){
            char key = c.first;    // map ka key (character)
            int value = c.second;
            if (key == 'a' || key == 'e' || key == 'i' || key == 'o' || key == 'u') {
                max_even = max(max_even, value);
            }
            else{
                max_odd = max(max_odd,value);
            }
        }
        return max_even+max_odd;
    }
};