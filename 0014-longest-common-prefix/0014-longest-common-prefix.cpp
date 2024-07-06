class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string sol= "";
        sort(strs.begin(),strs.end());
        int n=strs.size();
string f1=strs[0];
string f2=strs[n-1];

for(int i=0;i<min(f1.size(),f2.size());i++)
{
    if(f1[i]!=f2[i])
    return sol;

    sol+=f1[i];
}
return sol;
    }
};