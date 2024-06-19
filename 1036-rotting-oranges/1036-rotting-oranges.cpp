class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        queue<pair<int,int>>qq;
        int n=grid.size();
        int m=grid[0].size();
        int time=0;
        int fresh=0;


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    qq.push({i,j});
                }
                else if(grid[i][j]==1)
                fresh++;
            }
        }

int ans=0;

        while(!qq.empty())
        {
          
            int nm=qq.size();
            for(int i=0;i<nm;i++)
            {
                int x=qq.front().first;
                int y=qq.front().second;
                qq.pop();
              
              if(x>0 && grid[x-1][y]==1)
              {
                grid[x-1][y]=2;
                fresh--;
                qq.push({x-1,y});
              }
               if(y>0 && grid[x][y-1]==1)
              {
                grid[x][y-1]=2;
                fresh--;
                qq.push({x,y-1});
              }
               if(x<n-1 && grid[x+1][y]==1)
              {
                grid[x+1][y]=2;
                fresh--;
                qq.push({x+1,y});
              }
               if(y<m-1 && grid[x][y+1]==1)
              {
                grid[x][y+1]=2;
                fresh--;
                qq.push({x,y+1});
              }
        }
        if(!qq.empty())
        ans++;
        }
if(fresh==0)
        return ans;
        return -1;
        
    }
};