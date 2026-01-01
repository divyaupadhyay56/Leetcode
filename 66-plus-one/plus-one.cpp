class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n,rem=1;
        for(int i=digits.size()-1;i>=0;i--){
            n=digits[i]+rem;
            digits[i]= n%10;
            rem= n/10;
        }
        if(rem){
            digits.insert(digits.begin(),rem);
        }
        
        return digits;
        
    }
};