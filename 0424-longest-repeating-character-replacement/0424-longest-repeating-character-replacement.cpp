class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
int n=s.size();
int maxic=0;

      

        int l=0;
        int r=0;
        while(l<s.size())
        {
            freq[s[l]-'A']++;

            maxic=max(maxic,freq[s[l]-'A']);
            // storing maxfreq till lth index

            if((l-r)>=k+maxic)
            {

            freq[s[r]-'A']--;
            r++;
            }

            l++;
        }

return n-r;


    
    }
};