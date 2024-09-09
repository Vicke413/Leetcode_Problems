class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {


 
    int n=matrix.size();
    int m=matrix[0].size();
       int l=0;
    int r=m-1;
int mid=0;


    while(l<n && r>=0)
    {
        mid=(l+r)/2;

        if(matrix[l][r]>target)
    {           
        r--;
        }
        else if(matrix[l][r]<target)
        l++;
        else if(matrix[l][r]==target)
        return true;
    }
    return false;
        
    }
};