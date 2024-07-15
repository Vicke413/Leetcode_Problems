class Solution {
public:

bool subset_sum(vector<int>&nums, int target,int n)
{


 int dp[n+1][target+1];
      
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=target;j++)
            {
                if(i==0)
                dp[i][j]=false;
                if(j==0)
                dp[i][j]=true;
            }
        }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=target;j++)
        {
            if(nums[i-1]<=j)
            {
                dp[i][j]=(dp[i-1][j] || dp[i-1][j-nums[i-1]]);
            }
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][target];
}
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
  
        int totalSum=0;
        for(int i=0;i<n;i++)
        {
            totalSum+=nums[i];
        }
              if(totalSum%2!=0)
        return false;
        int target=totalSum/2;

       
        
    
        return subset_sum(nums,target,n);
    }
};