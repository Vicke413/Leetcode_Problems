class Solution {
public:


void dfs(int in,vector<vector<int>>& stones,vector<bool>&vis)
{
    vis[in]=true;

    for(int i=0;i<stones.size();i++)
    {
        if(!vis[i])
        {

            if(stones[i][0]== stones[in][0] || stones[i][1]== stones[in][1])
            {
                dfs(i,stones,vis);
            }
        }
    }
}
    int removeStones(vector<vector<int>>& stones) {



        int n=stones.size();
       
int g=0;
      vector<bool>vis(n,false);
      for(int i=0;i<n;i++)
      {
        if(!vis[i]){
        dfs(i,stones,vis);
        g++;
        }
      }
        
        return n-g;
    }
};