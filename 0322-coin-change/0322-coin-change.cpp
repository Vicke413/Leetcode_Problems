class Solution {
public:
    int coinChange(vector<int>& coins, int sum) {

int n=coins.size();

vector<vector<int>>dp(n+1,vector<int>(sum+1,INT_MAX));

dp[0][0]=0;
for(int i=1;i<=sum;i++)
dp[0][i]=INT_MAX-1;



      for(int i=1;i<=n;i++)
      {
        for(int j=0;j<=sum;j++)
        {
          if(coins[i-1]<=j)
          {
            dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
          }
          else
          dp[i][j]=dp[i-1][j];
        }
      }
      if(dp[n][sum]!=INT_MAX-1)
      {
        return dp[n][sum];

      }
      return -1;
        
    }
};