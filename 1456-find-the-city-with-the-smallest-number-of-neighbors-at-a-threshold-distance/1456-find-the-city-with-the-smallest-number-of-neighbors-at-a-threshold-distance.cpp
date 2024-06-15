class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int ds) {
        
        vector<int>vis(n+1,0);
        vector<vector<int>>dis(n,vector<int>(n,INT_MAX));
       

        for(int i=0;i<n;i++)
        dis[i][i]=0;
        for(auto it:edges)
        {
            dis[it[0]][it[1]]=it[2];
            dis[it[1]][it[0]]=it[2];
            
            
        }

        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(  dis[i][k]!=INT_MAX && dis[k][j]!=INT_MAX && dis[i][k]+dis[k][j]< dis[i][j])

                    {
                        dis[i][j]=dis[i][k]+dis[k][j];

                    }
                }
            }
        }

int ans;
int sol=0;
    for(int i=0;i<n;i++)
    {
        int ci=0;
        for(int j=0;j<n;j++)
        {
            if(dis[i][j]<=ds && i!=j)
            {
                ci++;

            }
        }

        if(ci<=ans)
        {
            ans=ci;
            sol=i;
        }
    }

return sol;


        
    }
};