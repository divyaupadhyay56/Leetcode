class Solution {
public:
    bool banana(const vector<int>& piles, int h, int k) {
        long long count = 0; 
        for (int i = 0; i < piles.size(); i++) {
            count += (piles[i] + k - 1) / k; 
        }
        return count <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end()); 
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;  
            if (banana(piles, h, mid)) {
                ans = mid;
                right = mid - 1; 
            } 
            else {
                left = mid + 1; 
            }
        }
        return ans;
    }
};
