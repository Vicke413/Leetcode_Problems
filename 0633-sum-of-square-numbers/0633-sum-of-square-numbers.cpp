class Solution {
public:

    bool judgeSquareSum(int c) {
        long long l=0;
        long long r=sqrt(c);

       // 0 1 2 3 4 5 6 7 8
       // 45

        while(l<=r)
        {
            long long ans=l*l+r*r;

            if(ans==c)
            return true;
            else if(ans>c)
            r--;
            else
            l++;
        }
        return false;

    }
};