class Solution {
public:

bool dfs(int i, vector<int>adj[], vector<int>& vis)
{
if(vis[i]==-1)
vis[i]=1;
for(auto p:adj[i])
{
    if(vis[p]==-1){
        vis[p]=1-vis[i];
    if(dfs(p,adj,vis))
    return true;
    }
    else if(vis[p]==vis[i])
    return true;
}
return false;
}
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {

        vector<int>adj[n+1];

        for(auto k:dislikes)
        {
            adj[k[1]].push_back(k[0]);
            adj[k[0]].push_back(k[1]);
        }


vector<int>vis(n+1,-1);
for(int i=0;i<n;i++)
{
        if(dfs(i,adj,vis))
        return false;
}
return true;
        
    }
};