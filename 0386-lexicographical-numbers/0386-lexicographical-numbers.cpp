class Solution {
public:


void solve(int n,int idx,vector<int>&ans)
{

if(idx>n)
return;
if(idx<=n)
ans.push_back(idx);


    for(int i=0;i<=9;i++)
    {
        string temp="";
        temp+=to_string(idx);
        temp+=to_string(i);
        solve(n,stoi(temp),ans);
    }
}
    vector<int> lexicalOrder(int n) {
        vector<int>ans;

        for(int i=1;i<=9;i++)
        solve(n,i,ans);



return ans;
        
    }
};