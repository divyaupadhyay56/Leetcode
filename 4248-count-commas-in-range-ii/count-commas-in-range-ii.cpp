class Solution {
public:
    long long countCommas(long long n) {
        long long count = 0;
        long long threshold = 1000;
        while (n >= threshold) {
            count += (n - threshold + 1);
            if (threshold > LLONG_MAX / 1000) {
                break;
            }
            threshold *= 1000;
        }
        return count;
    }
};
