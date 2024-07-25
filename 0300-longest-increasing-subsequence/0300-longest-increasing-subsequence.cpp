class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        vector<int>LIS;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            int s=LIS.size();
            if(LIS.empty() ||  LIS[s-1]<nums[i])
            {
                LIS.push_back(nums[i]);
            }
            else
            {
                auto it=lower_bound(LIS.begin(),LIS.end(),nums[i]);
                *it=nums[i];
            }
        }
    //tc-o(nlogn)
    //sc-o(n)
        return LIS.size();
    }
};