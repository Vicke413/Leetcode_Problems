class Solution {

    private:
    bool ispossible(vector<int>&bloomDay,int m,int k,int day)
    {
        int total=0;

        for(int i=0;i<bloomDay.size();i++)
        {
            int c=0;

            while(i<bloomDay.size() && c<k && bloomDay[i]<=day)
            {
                c++;
                i++;
            }
            if(c==k)
            {
                total++;
                i--;
            }
            if(total>=m)
            return true;
        }
        return false;
    }
public:


    int minDays(vector<int>bloomDay ,int m, int k) {
          
        int n = bloomDay.size();

// long long product=m*k;
 if ((long long)m*k> n) return -1;
       // not possible case
        int left=1;
        int right=1e9;

        while(left<right)
        {
            int mid=left+(right-left)/2;
       
            if (ispossible(bloomDay,m,k,mid)) {
            right=mid;
            } else {
                left= mid+1;
            }
        }
          return left;
    
      
    
    }
};