class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        vector<int>dp(n+1,0);

int  cb=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='b')
            {
                cb++;
                dp[i+1]=dp[i];
            }
            else
            {
                dp[i+1]=min(1+dp[i],cb);
            }
        }

        return dp[n];



        
    }
};