class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int siz=nums.size();
        int prefix[siz];
        prefix[0]=nums[0];
        for(int i=1;i<siz;i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }

// we will use unordered map
     
unordered_map<int,int> sol;

int s=0;
for(int j=0;j<siz;j++)
{
    if(prefix[j]==k)
    s++;

    if(sol.find(prefix[j]-k)!=sol.end())
    {
        s+=sol[prefix[j]-k];
    }
    sol[prefix[j]]++;
}
return s;
    }
        
    
};