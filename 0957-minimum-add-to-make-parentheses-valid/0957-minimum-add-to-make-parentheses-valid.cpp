class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>ss;


        for(char c:s)
        {
            if(c==')')
            {
                if(!ss.empty())
                {
                    char p=ss.top();
                    if(p=='(')
                    ss.pop();
                    else
                    
                    ss.push(c);
                }
                else
                {
                    ss.push(c);
                }

            }
            else
            {
                    ss.push(c);

            }
        }
        return ss.size();
        
    }
};