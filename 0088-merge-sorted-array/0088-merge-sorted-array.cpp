class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int l=m-1;
      int r=n-1;
      int end=m+n-1;



      while(r>=0)
      {
        if(l>=0 && nums1[l]>nums2[r] )
        {
            nums1[end]=nums1[l];
            l--;
            end--;
        }
        else
        {
            nums1[end]=nums2[r];
            end--;
            r--;
        }
      }

    }
};