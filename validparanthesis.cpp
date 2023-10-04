class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(auto c:s)
        {
            if(c=='(' or c=='{' or c=='[')
            {
                stack.push(c);
            }
            else
            {
                if (stack.empty() || (stack.top() == '(' && c != ')') || (stack.top() == '{' && c != '}') || (stack.top() == '[' && c != ']')) 
                
                {
                    return false;
                }
            stack.pop();
            }
        }
        return stack.empty();
        
    }
};
