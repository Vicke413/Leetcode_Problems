class Solution {
public:


    int findTheLongestSubstring(string s) {
int mask=0;
unordered_map<int,int>m;

m[mask]=-1;

int res=0;
        
      for(int i=0;i<s.size();i++)
      {
        if(s[i]=='a')
        {
            mask=(mask^(1<<0));
        }
        else if(s[i]=='e')
        {
   mask=(mask^(1<<1));
        }
         else if(s[i]=='i')
        {
               mask=(mask^(1<<2));
        }
         else if(s[i]=='o')
        {
               mask=(mask^(1<<3));
        }
         else if(s[i]=='u')
        {
               mask=(mask^(1<<4));
        }

        if(m.find(mask)!=m.end())
        {
            res=max(res,i-m[mask]);
        }
        else
        {
            m[mask]=i;
        }
      }


        return res;
    }
};