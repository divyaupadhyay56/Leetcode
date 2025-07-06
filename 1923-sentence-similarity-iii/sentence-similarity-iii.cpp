class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> s1 = split(sentence1);
        vector<string> s2 = split(sentence2);

        // Make s1 the shorter sentence for simplicity
        if(s1.size() > s2.size()) swap(s1, s2);

        int l = 0;
        int r = 0;

        // Compare from the start
        while(l < s1.size() && s1[l] == s2[l]){
            l++;
        }

        // Compare from the end
        while(r < s1.size() - l && s1[s1.size()-1-r] == s2[s2.size()-1-r]){
            r++;
        }

        // If l + r covers entire s1, then s1 can be made equal to s2
        return l + r == s1.size();
    }

private:
    vector<string> split(string& s){
        vector<string> res;
        stringstream ss(s);
        string word;
        while(ss >> word){
            res.push_back(word);
        }
        return res;
    }
};