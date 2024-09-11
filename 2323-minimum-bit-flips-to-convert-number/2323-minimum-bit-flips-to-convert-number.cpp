class Solution {
public:
    int minBitFlips(int start, int goal) {


    int xo=start ^ goal;
    //we gonna use it later
    int c=0;

    for(int i=0;i<31;i++)
    // interate all 32 bits
    {
        if(xo & (1<<i))
        // checking how many bits are differs, 
        //so xor is 1 , we increment count

        c++;
    }

    
        return c;



        
    }
};