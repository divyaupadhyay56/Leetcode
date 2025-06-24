class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ans;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key){
               int start = max(0, i-k);   
                int end = min(n-1, i+k);  
                if(ans.size()!=0) 
                    start = max(ans[ans.size() - 1] + 1, start); 
                
                for(int j = start; j<=end; j++) 
                    ans.push_back(j); 
            }
        }
        return ans;
    }
};