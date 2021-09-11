class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        bool ans=true;
        for(int i=0;i<s.size();i++){
        if(s[i]=='(' or s[i]=='{' or s[i]=='['){
            stk.push(s[i]);
            
        }
        else if(s[i]==')'){
            if(!stk.empty() and stk.top()=='('){
                stk.pop();
            }
            else{
                ans=false;
                break;
            }
        }
              else if(s[i]=='}'){
            if(!stk.empty() and stk.top()=='{'){
                stk.pop();
            }
            else{
                ans=false;
                break;
            }
        
    }
              else if(s[i]==']'){
            if(!stk.empty() and stk.top()=='['){
                stk.pop();
            }
            else{
                ans=false;
                break;
            }
    }
        }
        if(!stk.empty()){
            return false;
        }
        return ans;
    }
};
