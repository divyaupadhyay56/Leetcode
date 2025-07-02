class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> mp;
        for(auto c:chars){
            mp[c]++;
        }
        int totalLength =0;

        for(auto word : words){
            unordered_map<char,int> freq; // frequency map for each word

        // Count frequencies of characters in the current word
            for(char c : word){
                freq[c]++;
            }
        
            bool canForm = true;
            for(auto it : freq){
                char ch = it.first;
                int cnt = it.second;
                if(mp[ch] < cnt){
                    canForm = false;
                    break;
                }
            }

            if(canForm){
                totalLength += word.size();
            }
        }

        return totalLength;

    }
};