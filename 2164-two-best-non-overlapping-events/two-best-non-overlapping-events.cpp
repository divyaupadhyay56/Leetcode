class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());
        
        int n = events.size();
        vector<int> dp(n);
        
        dp[n-1] = events[n-1][2];
        for (int i = n-2; i >= 0; i--) {
            dp[i] = max(dp[i+1], events[i][2]);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            ans = max(ans, events[i][2]);

            int l = i + 1, r = n - 1, idx = -1;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (events[mid][0] > events[i][1]) {
                    idx = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }

            if (idx != -1) {
                ans = max(ans, events[i][2] + dp[idx]);
            }
        }

        return ans;
    }
};
