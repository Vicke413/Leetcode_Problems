class Solution {
public:
    int findComplement(int num) {

        vector<int>v;
int temp=num;
long long p2=2;
        while(temp>>1)
        {
            temp>>=1;
            p2<<=1;
        }

return p2-num-1;
    
        
    }
};