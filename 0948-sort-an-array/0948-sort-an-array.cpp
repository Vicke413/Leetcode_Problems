class Solution {
public:


void merge(int low,int middle,int high,vector<int>&nums)
{
    vector<int>temp;

    int l=low;
    int r=middle+1;
    while(l<=middle && r<=high)
    {
        if(nums[l]<=nums[r])
        {
            temp.push_back(nums[l]);
            l++;
        }
        else
        {
            temp.push_back(nums[r]);
            r++;
        }
    }
    while(l<=middle)
    {
        temp.push_back(nums[l]);
        l++;
    }
    while(r<=high)
    {
        temp.push_back(nums[r]);
        r++;
    }
for(int i=low;i<=high;i++)
nums[i]=temp[i-low];
}
void mergeSort(int l,int r,vector<int>&nums)
{
    if(l>=r)
    return;
    int mid=l+(r-l)/2;

    mergeSort(l,mid,nums);
    mergeSort(mid+1,r,nums);
    merge(l,mid,r,nums);
}
    vector<int> sortArray(vector<int>& nums) {



    mergeSort(0,nums.size()-1,nums);
  
        return nums;
    }
};