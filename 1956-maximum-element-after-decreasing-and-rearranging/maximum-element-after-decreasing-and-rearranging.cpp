class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        arr[0] = 1;
       
        for(int i=1;i<n;i++){
            if ((arr[i] - arr[i-1]) > 1) {
                arr[i] = arr[i-1] + 1;
            } 
          
        }
        
        int max = arr[0];
        for(int j=0;j<n;j++){
            if(arr[j]>max){
                max = arr[j];
            }
        }
        return max;
    }
};