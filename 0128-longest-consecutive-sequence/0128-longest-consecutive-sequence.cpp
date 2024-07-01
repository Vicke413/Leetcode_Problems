class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
unordered_set<int>s;

for(auto k:nums)
{
s.insert(k);
}
int ans=0;

for(int num:nums)
{
    if(s.find(num-1)==s.end())
    {
        int next=num+1;
        int c=1;

        while(s.find(next)!=s.end())
        {
            next++;
            c++;
        }
        ans=max(ans,c);
    }
}
        
        return ans;
    }
};