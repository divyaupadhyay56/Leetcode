class Solution {
public:
    int maxScore(string s) {
        int j=s.length()-1;
        // int score=0;
        int maxscore = INT_MIN;
        int ones =0;
        int zeroes =0;
        for(int i=0;i<j;i++){
            if(s[i] == '1'){
                ones++;
            }
            else{
                zeroes++;
            }
            maxscore = max(maxscore,zeroes-ones);
        }
        if(s[j] == '1'){
            ones++;
        }
        return maxscore+ones;
    }
};