class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        int n = spells.size();
        int m = potions.size();
        sort(potions.begin(),potions.end());
        for(int i=0;i<n;i++){
            int spell = spells[i];
            int left =0;
            int right = m-1;
            while(left<=right){
                int mid = (left+right)/2;
                long long product = (long long)spell * (long long)potions[mid];
                if (product >= success) {
                    right = mid - 1;
                } 
                else{
                    left = mid + 1;
                }
            }
            ans.push_back(m - left);

            
        }
        return ans;
    }
};