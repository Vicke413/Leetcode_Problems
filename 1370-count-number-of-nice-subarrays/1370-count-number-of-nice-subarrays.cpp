class Solution {
public:


int func(vector<int>&nums,int k)
{
    int n=nums.size();
    int l=0;
    int r=0;
    long long s=0;
    int a=0;

    while(r<n)
    {

        s+=nums[r]%2;
while(s>k)
{
    s-=nums[l]%2;
    l++;
}


r++;


a+=r-l;
    }
    return a;

}
    int numberOfSubarrays(vector<int>& nums, int k) {

        int n=nums.size();
    int ans=func(nums,k)-func(nums,k-1);
        return ans;
    }
};