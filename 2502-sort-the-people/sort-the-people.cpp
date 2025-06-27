class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> ans;
        for (int i = 0; i < names.size(); ++i) {
            ans.push_back({heights[i], names[i]});
        }
        
        sort(ans.rbegin(), ans.rend());
        
        
        vector<string> sorted;
        for (auto i : ans) {
            sorted.push_back(i.second);
        }
        
        return sorted;
    }
};