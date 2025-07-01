class Solution {
public:
    static bool cmp(string a, string b) {
        if(a + b > b + a) {
            return true;
        }
        return false;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> str_nums;
        for (int num : nums) {
            str_nums.push_back(to_string(num));
        }
        
        sort(str_nums.begin(), str_nums.end(), cmp);
        
        if (str_nums[0] == "0") return "0"; // To handle multiple zeros
        
        string result = "";
        for (string s : str_nums) {
            result += s;
        }
        
        return result;
    }
};