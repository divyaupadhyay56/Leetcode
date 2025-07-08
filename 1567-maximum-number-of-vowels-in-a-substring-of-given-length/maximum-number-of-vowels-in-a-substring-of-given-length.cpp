class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;
        int maxvow = 0;

        // First window count
        for(int i = 0; i < k; i++) {
            if(s[i] =='a' || s[i] =='e' || s[i] =='i' || s[i] =='o' || s[i] =='u'){
                count++;
            }
        }
        maxvow = count;

        // Slide window from index k onwards
        for(int i = k; i < s.length(); i++) {
            // Add incoming character
            if(s[i] =='a' || s[i] =='e' || s[i] =='i' || s[i] =='o' || s[i] =='u'){
                count++;
            }
            // Remove outgoing character (i-k)
            if(s[i-k] =='a' || s[i-k] =='e' || s[i-k] =='i' || s[i-k] =='o' || s[i-k] =='u'){
                count--;
            }
            maxvow = max(maxvow, count);
        }

        return maxvow;
    }
};
