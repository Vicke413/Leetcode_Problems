class Solution {
public:

long long solve(vector<vector<int>>& questions,long i,int n,vector<long long>&dp)
{
    if(i>=n)
    return 0;
    if(dp[i]!=-1)
    return dp[i];


     long long not_take=solve(questions,i+1,n,dp);
       long next_index=i+questions[i][1]+1;
    long long take=questions[i][0]+  solve(questions,next_index,n,dp);
 

    
     
        

    
          
    dp[i]=max(take,not_take);
    return dp[i];
}
    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        vector<long long >dp(n,-1);
        return solve(questions,0,n,dp);;
    }
};