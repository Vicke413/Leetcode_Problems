class Solution {
public:

bool solve(int i,vector<int>&nums,int n,vector<int>&dp)
{
    if(i>=n)
    return true;


if(dp[i]!=-1)
return dp[i];
bool res=false;
//case 1
    if(i+1<n && nums[i]==nums[i+1])
   res|= solve(i+2,nums,n,dp);

// case 2
    if(i+2<n && nums[i]==nums[i+1] && nums[i+1]==nums[i+2])
    {
       res|= solve(i+3,nums,n,dp);
    }

    if(i+2<n && (nums[i+1]-nums[i])==1 && (nums[i+2]-nums[i+1])==1 )
    res |=solve(i+3,nums,n,dp);

    return dp[i]=res;
}
    bool validPartition(vector<int>& nums) {

        int n=nums.size();
        vector<int>dp(n+1,-1);
        return solve(0,nums,n,dp);
        
    }
};