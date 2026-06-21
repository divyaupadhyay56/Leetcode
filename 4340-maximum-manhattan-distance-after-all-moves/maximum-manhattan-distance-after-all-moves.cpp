class Solution {
public:
    int maxDistance(string moves) {
        int u = 0, d = 0, l = 0, r = 0, k = 0;
        for (char c : moves) {
            if (c == 'U'){
                u++;
            } 
            else if (c == 'D'){
                d++; 
            } 
            else if (c == 'L'){
                l++;
            } 
            else if (c == 'R'){
                r++;
            } 
            else{
                k++;
            }
        }
        return abs(r - l) + abs(u - d) + k;               // x=r−l, y=u−d => |x|+|y|+k
    }
};