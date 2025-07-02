class Solution {
public:
    bool  isvowel(char c){
        if(c=='a' ||c=='e' ||c=='i' ||c=='o'||c=='u'){
            return true;
        }
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int w = words.size();
        int q = queries.size();
        int sum=0;
        vector<int> ans(q); // store the result
        vector<int> cumsum(w); // stores cumulative sum 
        for(int i=0;i<words.size();i++){
            if(isvowel(words[i][0]) && isvowel(words[i].back())){
                sum++;
            }
            cumsum[i] = sum;
        }
        for(int i=0;i<q;i++){
            int l = queries[i][0];
            int r = queries[i][1];
            ans[i] = cumsum[r]-((l>0) ? cumsum[l-1] : 0); 
        }
        return ans;
    }
};