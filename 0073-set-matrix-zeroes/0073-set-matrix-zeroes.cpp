class Solution {
public:


void dfs(int i,int j, vector<vector<int>>& matrix , int n,int m)
{

    for(int k=0;k<n;k++)
    {
        if(matrix[k][j]!=0)
        matrix[k][j]=-99999;
    }

    for(int k=0;k<m;k++)
    {
        if(matrix[i][k]!=0)
        matrix[i][k]=-99999;
    }

}


    void setZeroes(vector<vector<int>>& matrix) {

        int n=matrix.size();

        int m=matrix[0].size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {

                if(matrix[i][j]==0)
                {
                    dfs(i,j,matrix,n,m);
                }
            }
        }

          for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {

                if(matrix[i][j]==-99999)
                {
                    matrix[i][j]=0;
                }
            }
        }


        
    }
};