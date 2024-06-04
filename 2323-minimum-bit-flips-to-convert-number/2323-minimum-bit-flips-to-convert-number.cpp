class Solution {
public:
    int minBitFlips(int start, int goal) {


    int xo=start ^ goal;
    int c=0;

    for(int i=0;i<31;i++)
    {
        if(xo & (1<<i))
        c++;
    }
        return c;



        
    }
};