class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        for(char c : s){
            if(c == '(' || c == '{' || c == '[')
                brackets.push(c);
            else {
                if(!brackets.empty()){
                    if(brackets.top()+1 == c || brackets.top()+2 == c){
                        brackets.pop();
                        continue;
                    }    
                }
                 return false;
            }    
        }

        if(!brackets.empty())
            return false;
        return true;
    }
};
