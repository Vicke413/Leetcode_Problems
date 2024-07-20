class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        
int n=rowSum.size();
int m=colSum.size();
        // 5 7 10
        // 8 6 8


        // 5 0 0
        // 0 6 1
        // 0 1 9
vector<vector<int>>ans(n,vector<int>(m,0));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans[i][j]=min(rowSum[i],colSum[j]);
                rowSum[i] -= ans[i][j];
                colSum[j] -= ans[i][j];
            }
        }
        return  ans;


    }
};