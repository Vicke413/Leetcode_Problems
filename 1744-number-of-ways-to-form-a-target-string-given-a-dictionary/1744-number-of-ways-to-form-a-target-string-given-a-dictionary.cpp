class Solution {
public:
int m;
int k;
int M=1e9+7;
int solve(string &target, vector<vector<long long>>&freq,int i,int j, vector<vector<int>>&dp)
{
    if(i==m)
    return 1;
    if(j==k)
    return 0;
if(dp[i][j]!=-1)
return dp[i][j];

    int not_take=solve(target,freq,i,j+1,dp)%M;
    int take = (freq[target[i] - 'a'][j] * solve(target, freq, i + 1, j + 1, dp)) % M;
    return dp[i][j]=(take+not_take)%M;


}
    int numWays(vector<string>& words, string target) {
         m=target.size();
         k=words[0].size();



        vector<vector<long long>>freq(26,vector<long long>(k,0));

        for(int i=0;i<k;i++)
        {
            for(const string & s:words)
            {
                char c=s[i];
                freq[c-'a'][i]++;
            }
        }
        
        vector<vector<int>>dp(m,vector<int>(k,-1));

        return solve(target,freq,0,0,dp);
        
    }
};