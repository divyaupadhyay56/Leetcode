class Solution {
public:
    int findClosest(int x, int y, int z) {
        int count =abs(z-x);
        int count1 =abs(z-y);
        if(count < count1){
            return 1;
        }
        else if(count1 < count){
            return 2;
        }
        return 0;
    }
};