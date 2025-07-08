class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> firstIndex;
        int maxLen = -1;
        for(int i = 0; i < s.length(); i++){
            if(firstIndex.find(s[i]) != firstIndex.end()){
                maxLen = max(maxLen, i - firstIndex[s[i]] - 1);
            } 
            else {
                firstIndex[s[i]] = i;
            }
        }
        return maxLen;
    }
};
