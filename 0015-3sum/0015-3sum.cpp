class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
      
vector<vector<int>>ans;

   for(int i=0;i<n;i++)
   {
    if(i>0 && nums[i]==nums[i-1])
    continue;
    int l=i+1;
    int r=n-1;


    while(l<r)
    {
        

        int sum=nums[l]+nums[r]+nums[i];
        if(sum<0)
        {
            l++;
        } else if(sum>0)
        {
            r--;
        }
        else
        {
            vector<int>temp={nums[l],nums[r],nums[i]};
            sort(temp.begin(),temp.end());
            ans.push_back(temp);
            l++;
            r--;

            while(nums[l]==nums[l-1] && l<r) l++; 
            while(nums[r]==nums[r+1] && l<r) r--;
        }
    }


   }

return ans;
        
    }
};