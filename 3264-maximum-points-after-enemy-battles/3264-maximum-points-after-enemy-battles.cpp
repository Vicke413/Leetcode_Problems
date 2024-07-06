class Solution {
public:
    long long maximumPoints(vector<int>& es, int cur) {

int n=es.size();
sort(es.begin(),es.end());

long long points=0;
bool ok=true;

if(cur<es[0])
return 0;

long long ac=0;

ac=accumulate(es.begin(),es.end(),0LL);
ac-=es[0];
ac+=cur;

return ac/es[0];




        
    }
};