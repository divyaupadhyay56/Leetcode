class Solution {
public:
    bool hasAlternatingBits(int n) {
        int p=log2(n);
        while(p>=0){
            n=n-pow(2,p);
            p=p-2;
        }
        return (n==0);
    }
};