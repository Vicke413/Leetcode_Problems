class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        

        priority_queue<int>pq;
        int n=profits.size();
vector<pair<int,int>>vp;

for(int i=0;i<n;i++)
{
    vp.push_back({capital[i],profits[i]});
}


sort(vp.begin(),vp.end());

int start=0;
int total_profit=w;
for(int i=0;i<k;i++)
{
// we ll loop for k times
// for each kth time , 
//we ll finding the best profit among all 
//and adding into our profit with the help of priority queue

while(start<n && vp[start].first<= total_profit)
{
    pq.push(vp[start].second);
    start++;
}

if(pq.size()==0)
break;
total_profit+=pq.top();
pq.pop();

}

return total_profit;

    }
};