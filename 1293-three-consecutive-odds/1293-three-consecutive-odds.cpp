class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {

int odd=0;
int n=arr.size();
for(int i=0;i<n;i++)
{
    if(arr[i]& 1)
    odd++;
    else
    odd=0;
    if(odd==3)
    return true;
}

return false;
        
    }
};