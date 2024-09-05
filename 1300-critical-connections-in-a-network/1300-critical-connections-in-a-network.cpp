class Solution {
public:


int time=1;
void dfs(int node,int parent,vector<int>adjl[],vector<int>&vis,int lowt[],int ins[],  vector<vector<int>>&bridges)
{
vis[node]=1;

lowt[node]=ins[node]=time;
time++;

for(auto it:adjl[node])
{


    if(it==parent)
    {
        continue;
    }
    if(!vis[it])
    {
        dfs(it,node,adjl,vis,lowt,ins,bridges);

        lowt[node]=min(lowt[node],lowt[it]);

        if(lowt[it]>ins[node])
        {
            bridges.push_back({it,node});
        }
    }
    else
    lowt[node]=min(lowt[node],lowt[it]);
}


}

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        
        vector<int>adjl[n];


        for(auto it:connections)
        {
            adjl[it[0]].push_back(it[1]);
            adjl[it[1]].push_back(it[0]);
        }

        vector<int>vis(n,0);

        int lowt[n];
        int insert_time[n];
        vector<vector<int>>bridges;


         dfs(0,-1,adjl,vis,lowt,insert_time,bridges);

         return bridges;
    }
};