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
bool f1=false;
bool f2=false;
        for(int i=0;i<n;i++)
        {
            if(matrix[i][0]==0)
            f1=true;

        }
        for(int i=0;i<m;i++)
        {
            if(matrix[0][i]==0)
            f2=true;
        }


for(int i=1;i<n;i++)
{
    for(int j=1;j<m;j++)
    {
        if(matrix[i][j]==0)
        {
            matrix[0][j]=0;
            matrix[i][0]=0;
        }
    }
}


for(int i=1;i<n;i++)
{
    for(int j=1;j<m;j++)
    {
        if(matrix[0][j]==0 || matrix[i][0]==0)
        {
          matrix[i][j]=0;
        }
    }
}
if(f1)
{
    for(int i=0;i<n;i++)
    {
        matrix[i][0]=0;
    }
}

      if(f2)
{
    for(int i=0;i<m;i++)
    {
        matrix[0][i]=0;
    }
}  

// TC=O(N*M)
// SC=O(1)
    }
};