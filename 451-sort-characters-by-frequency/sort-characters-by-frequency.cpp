class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        string str;
        int max = 0;
        for(auto i : s){
            mp[i]++;
            
        }
        vector<pair<char, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });

        for(auto& [ch,freq] : vec){
            str.append(freq,ch);
        }
        return str;
    }
};