class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i=0;
        int j=0;
        int n=nums.size();


while(j<n)
{
    int c=1;
    while(j<n-1 && nums[j]==nums[j+1]  )
    {
        c++;
        j++;
    }

    for(int k=0;k<min(2,c);k++)
    {
        nums[i]=nums[j];
        i+=1;
    }
    j++;
}
return i;
    }
};