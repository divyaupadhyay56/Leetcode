class Solution {
public:
    // Return distinct prime factors of x
    vector<int> getPrimeFactors(int x) {
        vector<int> factors;
        for (int p = 2; p * p <= x; p++) {
            if (x % p == 0) {
                factors.push_back(p);
                // Remove all occurrences of p
                while (x % p == 0) {
                    x /= p;
                }
            }
        }
        // If x > 1, then x itself is prime
        if (x > 1) {
            factors.push_back(x);
        }
        return factors;
    }

    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        // Prime factors of every element
        vector<vector<int>> factors(n);
        for (int i = 0; i < n; i++) {
            factors[i] = getPrimeFactors(nums[i]);
        }
        unordered_map<int, int> freq;
        int distinctPrimes = 0;
        int left = 0;
        int answer = 0;
        for (int right = 0; right < n; right++) {
            // Add prime factors of nums[right]
            for (int p : factors[right]) {
                if (freq[p] == 0) {
                    distinctPrimes++;
                }
                freq[p]++;
            }
            // Shrink window if more than k primes
            while (distinctPrimes > k) {
                for (int p : factors[left]) {
                    freq[p]--;
                    if (freq[p] == 0) {
                        distinctPrimes--;
                    }
                }
                left++;
            }
            answer = max(answer, right - left + 1);
        }
        return answer;
    }
};