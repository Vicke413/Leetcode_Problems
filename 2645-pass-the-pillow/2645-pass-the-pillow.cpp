class Solution {
public:
    int passThePillow(int n, int time) {


        int i=1;
        bool ok=true;
        int direction=1;

        while(time--)
        {
            if(i==n)
           {
            direction*=-1;
           }
           if(i==1)
           direction=1;

           
           i+=direction;

           
        }
        
        return i;
    }
};