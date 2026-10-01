class Solution {
public:
    bool isValid(string s) {
        stack<char>t;
        for(char i : s){
            if(s.size()==0 || i=='(' || i=='{' || i=='[')
                t.push(i);
            else{
                if(t.size() == 0)
                    return false;
                if(i == ')' && t.top() == '('){
                    t.pop();
                }else if(i == '}' && t.top() == '{'){
                    t.pop();
                }else if(i ==']' && t.top() == '['){
                    t.pop();
                }else{
                    return false;
                }
            }
        }
        if(t.size() == 0) return true;
        return false;
    }
};