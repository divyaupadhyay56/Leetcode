class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> lastskiplength;

        string res;
        for(auto i:s){
            if(i == '('){
                lastskiplength.push(res.length());
            }
            else if(i == ')'){
                int l = lastskiplength.top();
                lastskiplength.pop();
                reverse(begin(res)+l,end(res));
            }
            else{
                res.push_back(i);
            }
        }
        return res;
    }
};