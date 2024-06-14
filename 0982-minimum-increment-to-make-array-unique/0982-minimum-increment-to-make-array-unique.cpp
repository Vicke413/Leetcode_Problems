class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int ans=0;
        int maxi=0;

        sort(nums.begin(),nums.end());


        for(auto k:nums)
        {
            ans+=max(maxi-k,0);
maxi=max(maxi,k)+1;
        }
        return ans;
    }
};