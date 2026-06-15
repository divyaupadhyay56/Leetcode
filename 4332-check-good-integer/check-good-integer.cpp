class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum =0;
        int sq_sum =0;
        while(n>0){
            int a = n%10;
            sum = sum+a;
            sq_sum = sq_sum + (a*a);
            n = n/10;
        }
        if((sq_sum-sum) >= 50){
            return true;
        }
        return false;
    }
};