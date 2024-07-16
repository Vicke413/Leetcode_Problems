class Solution {
public:
    int maxProfit(vector<int>& prices) {


        int n=prices.size();

        int profit=0;
int cur=prices[0];
        for(int i=1;i<n;i++)
        {
                if(prices[i]<cur)
                cur=prices[i];

                profit=max(profit,prices[i]-cur);
        }
        return profit;

        

        
    }
};