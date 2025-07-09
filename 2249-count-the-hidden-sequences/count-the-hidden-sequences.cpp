class Solution {
public:
    int numberOfArrays(vector<int> differences, int lower, int upper) {
        long max_diff = 0;
        long min_diff = 0;
        long num = 0;
        for(int i = 0; i < differences.size(); i++) {
            num += differences[i];
            max_diff = max(max_diff, num);
            min_diff = min(min_diff, num);
        }
        int count = (upper - max_diff) - (lower - min_diff) + 1;
        return max(0, count);
    }
};