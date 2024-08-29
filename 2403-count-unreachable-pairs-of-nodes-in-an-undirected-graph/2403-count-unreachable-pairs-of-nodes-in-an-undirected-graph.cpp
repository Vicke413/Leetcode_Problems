class Solution {
public:

int dfs(int i,vector<int>adj[] ,vector<int>&vis,int &c)

{
    vis[i]=1;
    c++;

    for(auto k:adj[i])
    {
        if(vis[k]==0)
        dfs(k,adj,vis,c);
    }

    return c;
}
    long long countPairs(int n, vector<vector<int>>& edges) {

        vector<int>vis(n,0);
long long ans=0;

int p=n;
vector<int>adj[n];
for(auto it:edges)
{
    adj[it[0]].push_back(it[1]);
    adj[it[1]].push_back(it[0]);
}
        for(int i=0;i<n;i++)

        
        {
            if(vis[i]==0)
            {
                int c=0;

               int num= dfs(i,adj,vis,c);

               ans+=static_cast<long long>(p-num) * num;
               
               p=p-num;


            }
        }
        return ans;
        
    }
};