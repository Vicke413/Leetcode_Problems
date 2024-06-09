class Solution {
public:
    int numberOfChild(int n, int k) {
        
        int p=0;
        int d=1;
        for(int i=0;i<k;i++)
    {
    p+=d;
    if(p==0 || p==n-1)
    d*=-1;
    }
    return p;
    }
};