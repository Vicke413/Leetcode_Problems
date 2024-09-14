class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
        vector<int>ans;

        int n=queries.size();
        vector<int>pre(arr.size(),0);
        pre[0]=arr[0];
        for(int i=1;i<arr.size();i++)
        pre[i]=pre[i-1]^arr[i];
        for(int i=0;i<n;i++)
        {

            int start=queries[i][0];
            int end=queries[i][1];

            if(start==0)
            {
                ans.push_back(pre[end]);
            }
            else
            ans.push_back(pre[end]^pre[start-1]);
    
        }
        return ans;
        
    }
};