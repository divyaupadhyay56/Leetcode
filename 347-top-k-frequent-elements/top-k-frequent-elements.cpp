class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        // Frequency count
        for(int x : nums){
            mp[x]++;
        }
        // Store {number, frequency}
        vector<pair<int,int>> v;
        for(auto c : mp){
            v.push_back({c.first, c.second});
        }
        // Sort by frequency - highest first
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        // Take top k
        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};