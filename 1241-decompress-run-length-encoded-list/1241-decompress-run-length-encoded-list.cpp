class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {

        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int freq=2*i;
            int k=2*i+1;

            if(k<n)
            {
                for(int j=0;j<nums[2*i];j++)
                {
                    ans.push_back(nums[k]);
                }
            }
        }
        return  ans;
        
    }
};