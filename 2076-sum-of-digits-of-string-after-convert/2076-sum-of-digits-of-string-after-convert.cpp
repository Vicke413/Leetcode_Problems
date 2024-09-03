class Solution {
public:
    int getLucky(string s, int k) {

        string ans="";

        for(auto c: s)
        {
            int num=c-'a'+1 ;
            ans+=to_string(num);
        }
        int n=ans.size();

        
        while(k--)
        {
            int i=0;
            int s=0;
            n=ans.size();
            while(i<n)
            {
                s+=ans[i]-'0';
                i++;
            }

            ans=to_string(s);
        }

        return stoi(ans);
        
    }
};