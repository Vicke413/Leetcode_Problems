class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n = nums.size();
       int first_occ=nums[0]%2;

       vector<int>count(2,0);

       count[first_occ]++;
       int ans=1;

       for(int i=1;i<n;i++)
       {

if(nums[i]%2 !=first_occ)
{
    ans++;
    first_occ=1-first_occ;
}


        count[nums[i]%2]++;
       }

       return max({count[0],count[1],ans});
    }


};
