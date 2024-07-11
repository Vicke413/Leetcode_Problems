class Solution {
public:
    string reverseParentheses(string s) {
stack<char>ss;
int n=s.size();
for(int i=0;i<n;i++)
{
if(s[i]=='(')
{
ss.push(s[i]);
}
else if(s[i]==')')
{
string temp="";


while(ss.top()!='(')
{
temp+=ss.top();
ss.pop();
}
ss.pop();

for(char c:temp)
ss.push(c);
}
else
ss.push(s[i]);
}
string ans="";
while(!ss.empty())
{
ans+=ss.top();
ss.pop();
}
reverse(ans.begin(),ans.end());
return ans;
    }
};