class Solution {
public:
    long long sumAndMultiply(int n) {
        long long count = 0;
        string st = "";
        string str = to_string(n);
        for(int i=0;i<str.size();i++){
            if(str[i] == '0'){
                continue;
            }
            else{
                st += str[i];
                count += (str[i]-'0');
            }
        }
        if (st.empty()) {
            return 0; 
        }

        long long num = std::stoll(st);
        return num*count;

        
    }
};