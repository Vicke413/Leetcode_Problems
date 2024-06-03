class Solution {
public:
    int appendCharacters(string s, string t) {
        
        int n=s.size();
        int m=t.size();
        // sizes of both strings 


        int l=0;
        int r=0;
        int c=0;
        // using two pointers 
        while(l<n && r<m)
        {

            if(s[l]==t[r])
            {
                l++;
                r++;

                c++;
            }
            else
            l++;
        }
        if(r>m-1)
        return 0;
        else
        {
           return  m-c;
        }
    }
};