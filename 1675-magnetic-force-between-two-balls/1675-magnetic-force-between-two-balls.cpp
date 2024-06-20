class Solution {
public:
bool dis(int mid,int m,vector<int>& position)
{
    int index=0;
    int c=1;

    for(int i=1;i<position.size();i++)
    {
if(position[i]-position[index] >=mid)
{
    c++;
    index=i;
}
    }
    return c>=m;
}
    int maxDistance(vector<int>& position, int m) {
        
sort(position.begin(),position.end());


int l=1;
int r=*max_element(position.begin(),position.end());
int ans=0;
while(l<=r)
{
    int mid=l+(r-l)/2;
    if(dis(mid,m,position))
    {
        ans=mid;
       l= mid+1;
    }
    else
    {
        r=mid-1;
    }
}

return ans;
        
    }
};