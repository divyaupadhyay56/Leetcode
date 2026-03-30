class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n = s1.size(); 
        vector<int> even_s1(26,0) , odd_s1(26,0); 
        vector<int> even_s2(26,0) , odd_s2(26,0); 

        for(int i=0; i<n; i++){
            if(i%2==0){
                even_s1[s1[i] - 'a']++; 
                even_s2[s2[i] - 'a']++;
            }
            else{
                odd_s1[s1[i] - 'a']++; 
                odd_s2[s2[i] - 'a']++; 
            }
        }
        return (even_s1 == even_s2 && odd_s1 == odd_s2); 
    }
};