class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n=digits.size();
       
    for(int i=n-1;i>=0;i--)
    {

        // 999
        // 1000
        if(digits[i]==9)
        {
            digits[i]=0;
        }
        else
        {
            digits[i]=digits[i]+1;
            return digits;
        }


      

    }
digits[0]=1;

digits.push_back(0);

return digits;
       
        
    }
};