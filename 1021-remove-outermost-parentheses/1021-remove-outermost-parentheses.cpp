class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stack;
        string final="";
        for(int i=0; i<s.length();i++){
            char c = s[i];
            if (c=='('){
                if(!stack.empty())
                   final.push_back(c);
                stack.push(c);
            }
            if(c==')'){
                stack.pop();
                if(!stack.empty())
                    final.push_back(c);
            }
        }
        return final;
    }
};