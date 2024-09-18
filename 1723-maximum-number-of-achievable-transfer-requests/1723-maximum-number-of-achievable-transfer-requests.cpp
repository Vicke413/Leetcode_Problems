class Solution {
public:
int res=INT_MIN;

int m;

void solve(int idx,int c,int n,vector<int>&st,vector<vector<int>>& requests)
   {
    if(idx>=m)
    {
        bool ok=true;
        for(int &x: st)
        {
            if(x!=0){
            ok=false;
            break;
            }
        }
        if(ok)
        res=max(res,c);
        return;
    }

    int fr=requests[idx][0];
    int to=requests[idx][1];
    st[fr]--;

    st[to]++;
    solve(idx+1,c+1,n,st,requests);

    st[fr]++;

    st[to]--;
      solve(idx+1,c,n,st,requests);
    
       }

    int maximumRequests(int n, vector<vector<int>>& requests) {

        m=requests.size();
        vector<int>st(n,0);

        solve(0,0,n,st,requests);
        return res;

        
    }
};