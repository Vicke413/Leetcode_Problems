class Solution {
public:


int r[4]={-1,1,0,0};
int c[4]={0,0,-1,1};
void dfs(int ii ,int jj, vector<vector<char>>& sol,vector<vector<char>>&grid ,int n ,int m)
{
    grid[ii][jj]='P';


    for(int i=0;i<4;i++)
    {
        int nr=r[i]+ii;
        int nc=c[i]+jj;
        if(nr<0 || nc<0 || nc>m-1 || nr>n-1 || grid[nr][nc] != 'O')
    {
        continue;
    }
    
    dfs(nr,nc,sol,grid,n,m);
    }
    
}
    void solve(vector<vector<char>>& grid) {


        int n=grid.size();
        int m=grid[0].size();

   


vector<vector<char>> sol(grid);

        for(int i=0;i<n;i++)
        {
            
         for(int j=0;j<m;j++)
        {
            if((i == 0 || i == n - 1 || j == 0 || j == m - 1) && grid[i][j] == 'O' )
            {
                dfs(i,j,sol,grid,n,m);
            }
        

        }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='P')
                grid[i][j]='O';
                else if(grid[i][j]=='O')
                grid[i][j]='X';
                        }
                                    
        }

      

         


        
    }
};