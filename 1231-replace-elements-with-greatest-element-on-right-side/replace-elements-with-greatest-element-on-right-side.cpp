class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max_num = -1;
        vector<int> res = arr;
        for (int i=arr.size()-1; i>=0; i--) {
            res[i] = max_num;
            max_num = max(max_num, arr[i]);
        }
        return res;
    }
};