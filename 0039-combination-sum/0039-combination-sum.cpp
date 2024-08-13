class Solution {
public:



void helper(int i,int t,vector<int>& c,vector<vector<int>>&ans,vector<int>&temp)
{
    if(i==c.size())
    {
        if(t==0)
        ans.push_back(temp);

        return;
    }

    if(c[i]<=t)
    {
        temp.push_back(c[i]);
        helper(i,t-c[i],c,ans,temp);

        temp.pop_back();
    }
    helper(i+1,t,c,ans,temp);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

vector<vector<int>>ans;
vector<int>temp;
        helper(0,target,candidates,ans,temp);

        return ans;
    }
};