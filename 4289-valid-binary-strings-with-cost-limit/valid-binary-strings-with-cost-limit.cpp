class Solution {
public:
    vector<string> result;
    void backtrack(int idx, int n, int k, string &curr, int cost, bool prevOne) {
        // Prune if cost exceeds k
        if (cost > k)
            return;
        // Valid string of length n formed
        if (idx == n) {
            result.push_back(curr);
            return;
        }
        // Place '0'
        curr.push_back('0');
        backtrack(idx + 1, n, k, curr, cost, false);
        curr.pop_back();
        // Place '1' only if previous character was not '1'
        if (!prevOne) {
            curr.push_back('1');
            backtrack(idx + 1, n, k, curr,
                      cost + idx, true);
            curr.pop_back();
        }
    }
    vector<string> generateValidStrings(int n, int k) {
        string curr = "";
        backtrack(0, n, k, curr, 0, false);
        return result;
    }
};