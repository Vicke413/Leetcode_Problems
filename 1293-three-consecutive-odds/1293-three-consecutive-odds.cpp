class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {

int n=arr.size();
if(n<3)
return false;
for(int i=0;i<n;i++)
{
    if(arr[i]&1)
    arr[i]=1;
    else
    arr[i]=0;
}
    for(int i=0;i<=n-3;i++)
    {
int sum=arr[i]+arr[i+1]+arr[i+2];
if(sum==3)
return true;
    }

return false;
        
    }
};