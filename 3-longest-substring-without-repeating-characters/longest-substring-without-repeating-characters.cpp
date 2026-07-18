class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>m(256,0);
        int j=0,maxcnt=0,cnt=0;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
            if(m[s[i]]==1)cnt++;
           if(cnt==i-j+1){
                maxcnt=max(maxcnt,i-j+1);
            }
            else if(cnt<i-j+1){
                m[s[j]]--;
                if(m[s[j]]==0)cnt--;
                  j++;
            }
        } 
        return maxcnt;
    }
};