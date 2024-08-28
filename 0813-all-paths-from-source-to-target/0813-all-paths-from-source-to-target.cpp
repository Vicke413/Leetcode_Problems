class Solution {
public:

void dfs(vector<vector<int>>& graph,int source,int destination,vector<vector<int>>& ans,vector<int>&temp)
{

temp.push_back(source);

    if(source==destination)
    ans.push_back(temp);

    for(auto k:graph[source])
    {
        dfs(graph,k,destination,ans,temp);
    }
    temp.pop_back();
}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {

int n=graph.size();
vector<vector<int>>ans;
vector<int>temp;
        dfs(graph,0,n-1,ans,temp);
        return ans;
        
    }
};