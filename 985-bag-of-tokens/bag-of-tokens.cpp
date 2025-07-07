class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0;
        int j = tokens.size()-1;
        int score =0;
        int maxScore =0;
        while(i<=j){
            if(power >= tokens[i]){
                power = power-tokens[i];
                score+=1;
                i++;
                maxScore = max(maxScore, score);
            }
            else if(score>=1){
                power =power+tokens[j];
                score = score-1;
                j--;
            }
            else{
                break;
            }
        }
        return maxScore;
    }
};