class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n=digits.size();
        vector<int>ans;
    

int c=0;
int num;
    for(int i=n-1;i>=0;i--)
    {
        if(i==n-1)
        num=digits[i]+c+1;
        else
        num=digits[i]+c;


        if((num)>=10)
        {
             ans.push_back((num)%10);
            c=1;
        }
        else
        {
            ans.push_back(num%10);
            c=0;
        }

    }

if(c)
ans.push_back(1);
reverse(ans.begin(),ans.end());

return ans;
       
        
    }
};