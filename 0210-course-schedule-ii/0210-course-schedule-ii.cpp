class Solution {
public:

bool topo(vector<vector<int>>& adj, int n, vector<int>& indegree, vector<int>& ans) {
    queue<int> q;
    int c = 0;

    for (int i = 0; i < n; ++i) {
        if (indegree[i] == 0)
            q.push(i);
    }

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        ++c;

        for (auto p : adj[node]) {
            indegree[p]--;
            if (indegree[p] == 0)
                q.push(p);
        }
    }

    return c == n; 
}

vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
    int n = numCourses;

    vector<vector<int>> adj(n);
    vector<int> indegree(n, 0);

    for (auto& pre : prerequisites) {
        adj[pre[1]].push_back(pre[0]);
        indegree[pre[0]]++;
    }

    vector<int> ans;

    if (topo(adj, n, indegree, ans))
        return ans;
    else
        return {};  
}

};