class Solution {
public:
    int minOperations(vector<int>& nums) {

        int ans=0;
        int flipped=0;

        for(auto k:nums)
        {

            if(k^flipped==0)
            {
                flipped^=1; 
                ans++;
            }
        }
        return ans;
        
    }
};