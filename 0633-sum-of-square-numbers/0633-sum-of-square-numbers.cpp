class Solution {
public:

    bool judgeSquareSum(int c) {


if(c==0 || c==1)
return true;




for(long long i=0;i*i<=c;i++)
{
    long long b2=sqrt(c-i*i);

    if(b2*b2 ==c-i*i)
    {
        

        return true;
    }
}

       return false; 
    }
};