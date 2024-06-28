class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {


        vector<int>adj[n];

        for(auto it:roads)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

    vector<int>neigh;

        for(vector<int> it:adj)
        {
            neigh.push_back(it.size());
        }
        sort(neigh.begin(),neigh.end());
        long long ans=0;
        for(long long  i=1;i<=n;i++)
        {
            ans+=i*neigh[i-1];
        }

        return ans;
    }
};