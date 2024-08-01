class Solution {
public:
    int countSeniors(vector<string>& details) {
int ans=0;


for(auto s:details)
{string k;
    for(int i=11;i<13;i++)
    {
        k+=s[i];
    }

    int num=stoi(k);
    if(num>60)
    ans++;
}
return ans;
    }
};