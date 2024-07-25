class Solution {
public:
int dp(int n,int m,vector<int> &n1,vector<int>&n2)
{
    int ans=0;

    int s[n+1][m+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
            s[i][j]=0;
            else if(n1[i-1]==n2[j-1])
            {
            s[i][j]=s[i-1][j-1]+1;
            ans=max(s[i][j],ans);
            }
            else
            s[i][j]=0;
        }
    }
return ans;
}
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();

        return dp(n,m,nums1,nums2);

        
    }
};