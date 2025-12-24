class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());
        int total = reduce(apple.begin(),apple.end()); // a binary operation to a range of elements to 
                                    //accumulate them into a single value see eg1 apple = 1x2x3=6
        int count = 0;
        for(int i=capacity.size()-1;i>=0;i--){
            total = total-capacity[i];
            count++;
            if(total<=0){
                return count;
            }
        }
        return -1;
    }
};