class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int l=0;
        int r=n-1;

int lsum=0;
int rsum=0;
int max_sum=INT_MIN;
        while(l<k)
        {
            
            lsum+=cardPoints[l];
            l++;
        }
        max_sum=lsum;
     
     for(int i=k-1;i>=0;i--)
     {
        lsum-=cardPoints[i];
        rsum+=cardPoints[r];
        r--;
        max_sum=max(max_sum, lsum+rsum);
     }
     return max_sum;
        
    }
};