class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;
        int res =0;
        int l=0;
        for(int i=0;i<fruits.size();i++){
            mp[fruits[i]]++;
            while(mp.size()>2){
                mp[fruits[l]]--;
                if(mp[fruits[l]] == 0){
                    mp.erase(fruits[l]);
                }
                l++;
            }

            res = max(res,i-l+1);
        }
        return res;
        
    }
};