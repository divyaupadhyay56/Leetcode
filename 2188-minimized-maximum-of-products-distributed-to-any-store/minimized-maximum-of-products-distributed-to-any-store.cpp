class Solution {
public:
    bool isPossible(vector<int>& quantities, int n, int mid){
        int count = 0;
        for(int q : quantities){
            count += (q + mid - 1) / mid; 
        }
        return count <= n;
    }

    int minimizedMaximum(int n, vector<int>& quantities) {
        int low = 1;
        int high = *max_element(quantities.begin(), quantities.end());
        int ans = high;

        while(low <= high){
            int mid = (low + high) / 2;
            if(isPossible(quantities, n, mid)){
                ans = mid;
                high = mid - 1;
            } 
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
