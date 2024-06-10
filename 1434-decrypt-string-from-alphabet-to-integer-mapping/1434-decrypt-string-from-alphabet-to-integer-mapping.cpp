class Solution {
public:
    string freqAlphabets(string s) {

        int n=s.size();
        int l=n-1;
        string ans="";

        while(l>=0)
        {
            if(s[l]=='#')
            {
               
                string a="";
                
              
                a+=s[l-2];
                a+=s[l-1];
                l-=2;

             
           

                int m=stoi(a)-1;
                char p='a'+m;
                ans+=p;
            }
            else
            {
                string temp="";
                temp+=s[l];
                int aa=stoi(temp)-1;
                char add='a'+aa;
                ans+=add;
            }
            l--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};