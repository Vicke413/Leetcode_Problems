class Solution {
public:
    long long maximumPoints(vector<int>& es, int cur) {

int n=es.size();
sort(es.begin(),es.end());

long long points=0;


for(int i=0;i<n;i++)
{
    if(cur>= es[i]  )
    {
        points++;
        cur-=es[i];
       
        break;
    }
}

if(points==0)
return 0;

long long ac=0;

ac=accumulate(es.begin(),es.end(),0LL);
ac+=cur;

return ac/es[0];




        
    }
};