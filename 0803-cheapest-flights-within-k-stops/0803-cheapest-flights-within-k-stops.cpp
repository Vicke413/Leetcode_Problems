class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int des, int k) {
        

        vector<pair<int,int>>adj[n];
vector<int>dist(n,INT_MAX);

dist[src]=0;

for(auto p: flights)
{
    int u=p[0];
    int v=p[1];
    int cc=p[2];
    adj[u].push_back({v,cc});
}
int steps=0;
        queue<pair<int,int>>qq;
        // first one is cur node, 2nd adj and 3rd i cost;

        qq.push({src,0});


        while(!qq.empty() && steps<=k)
        {
            int n=qq.size();
            
            while(n--)
            {
                int node=qq.front().first;
                int cost=qq.front().second;
                qq.pop();
                for(auto k:adj[node])
                {
                    int neig=k.first;
                    int c=k.second;

                        if(dist[neig]> cost+c)
{
    dist[neig]=cost+c;
                    qq.push({neig, cost+c});
}
                }
            }
            steps++;
        }


return dist[des]==INT_MAX? -1: dist[des];

    }
};