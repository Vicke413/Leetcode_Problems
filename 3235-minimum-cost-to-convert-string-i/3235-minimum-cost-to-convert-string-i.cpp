class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {

        int n=source.size();

        vector<pair<char,int>>adj[n];
long long ans=0;
vector<vector<long long >>dis(26,vector<long long>(26,INT_MAX));
        for(int i=0;i<original.size();i++)
        {
          long long s=original[i]-'a';
          long long e=changed[i]-'a';
          dis[s][e]=min(dis[s][e],(long long )cost[i]);

        }
        

        for(int k=0;k<26;k++)
        {
            for(int i=0;i<26;i++)
            {
                for(int j=0;j<26;j++)
                {
                    
                        dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
                    
                }
            }
        }

for(int i=0;i<source.size();i++)
{long long s=source[i]-'a';
          long long e=target[i]-'a';
          if(s==e)
          continue;
    if(dis[s][e]>=INT_MAX)
    {
return -1;
    }
    ans+=dis[s][e];
}
return ans;
    }
};
