class Solution
{
    public:
    //Function to convert an infix expression to a postfix expression.
    int prec(char c) {
    if(c == '^')
        return 3;
    else if(c == '/' || c=='*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
    string infixToPostfix(string s)
    {
        // Your code here
        stack<char>stk;
        string res;
        for(int i=0; i<s.size();i++){
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
                res+=s[i];
            }
            else if(s[i]=='('){
                stk.push(s[i]);
            }
            else if(s[i]==')'){
                while(stk.top()!='('){
                    res+=stk.top();
                    stk.pop();
                }
                stk.pop();
            }
            else{
                while(!stk.empty() and prec(s[i])<=prec(stk.top())){
                    res+=stk.top();
                    stk.pop();
                }
                stk.push(s[i]);
            }
        }
         while(!stk.empty()) {
          res += stk.top();
        stk.pop();
       }
       return res;
    }
};
