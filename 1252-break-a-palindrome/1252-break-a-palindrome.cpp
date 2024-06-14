class Solution {
public:
    string breakPalindrome(string s) {
        
        int n=s.size();
        string ans="";
        
        
        if(n==1)
            return ans;
        int l=0;
        int r=n-1;
        bool ok=false;
        while(l<r)
        {
            if(s[l]==s[r])
            {
                if(s[r]!='a')
                {
                    s[l]='a';
                    ok=true;
                    return  s;
                }
            }
            else
            {
                if(s[r]!='a')
                {
                    s[l]='a';
                    ok=true;
                    return s;
                }
            }
            l++;
            r--;
        }
        
       
       s[n-1]='b';
       return s;
        
    }
};