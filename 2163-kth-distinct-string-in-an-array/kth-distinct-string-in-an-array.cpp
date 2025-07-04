class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        for(auto& i:arr){
            mp[i]++;
        }
        int count = 0;
        for (auto& str : arr) {
            if (mp[str] == 1) { 
                count++;
                if (count == k) {
                    return str;
                }
            }
        }
        return "";
    }
};