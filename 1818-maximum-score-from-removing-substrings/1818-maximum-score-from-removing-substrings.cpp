class Solution {
public:
int remove(string &s,string ba_ab,int points)
{
    int tot=0;
    int j=0;
    int i;
string temp="";
    for( i=0;i<s.size();i++)
    {
s[j++]=s[i];

if(j>1 && s[j-2]==ba_ab[0] && s[j-1]==ba_ab[1])
{
    j-=2;
    tot+=points;
}
    }
s.resize(j);

return tot;
    
}
    int maximumGain(string s, int x, int y) {


        string a="ab";
        string b="ba";
        


if(x<y)
        {
swap(a,b);
swap(x,y);
        }

       return  remove(s,a,x) + remove(s,b,y);

      
        
    }
};