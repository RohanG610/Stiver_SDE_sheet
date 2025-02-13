class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        if(s.length()==1){
            return false;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                s1.push(s[i]);
            }
            else if(s[i]=='{'){
                s1.push(s[i]);
            }
            else if(s[i]=='['){
                s1.push(s[i]);
            }
            //closing brackets
            else if(s[i]==')'){
                if(!s1.empty() && s1.top()=='('){
                    s1.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i]=='}'){
                if(!s1.empty() && s1.top()=='{'){
                    s1.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i]==']'){
                if(!s1.empty() && s1.top()=='['){
                    s1.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return s1.empty();
    }
};
