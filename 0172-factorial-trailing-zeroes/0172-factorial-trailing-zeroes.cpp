class Solution {
public:
    int trailingZeroes(int n) {
        /*
2 2
3 6
4 24
5 120
6 720
7 


        */

        int ans=0;

        while(n>0)
        {
            n=n/5;
            ans+=n;
        }
        return ans;
        
    }
};