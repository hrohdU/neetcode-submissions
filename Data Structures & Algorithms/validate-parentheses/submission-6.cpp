class Solution {
public:
    bool isValid(string s) {
        stack<char> n ;
        if (s.size() >=2){
        for(int i = 0; i < s.size();i++){
            if((s[i] == '(')||(s[i] == '[')||(s[i] == '{')){
                n.push(s[i]);
            }
            else if((!n.empty()) && (((s[i] == ')') && (n.top()=='(')) || ((s[i] == ']') && (n.top() == '[')) || ((s[i] == '}') && (n.top() == '{')))){
                n.pop();
            }
            else if((s[i] == ')') || (s[i] == ']') || (s[i] == '}')){
                return false;
            }
            
        }
        if(n.empty()){
            return true;
        }
        
        }
        return false;
    }
};
