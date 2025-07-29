class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string, int> freq;

        // Step 1: remove duplicates in each day's responses
        for (auto& day : responses) {
            set<string> unique_day(day.begin(), day.end());
            for (auto& response : unique_day) {
                freq[response]++;
            }
        }

        // Step 2: find the response with max frequency
        string answer;
        int max_freq = 0;
        for (auto& [resp, count] : freq) {
            if (count > max_freq || (count == max_freq && resp < answer)) {
                max_freq = count;
                answer = resp;
            }
        }

        return answer;
    }
};