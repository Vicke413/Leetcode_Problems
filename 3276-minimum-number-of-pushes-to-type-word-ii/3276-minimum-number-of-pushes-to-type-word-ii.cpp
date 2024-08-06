#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mpp1;
        
        for(auto c:word)
        {
            mpp1[c]++;
        }
        vector<int> v;
        
        for(auto k:mpp1)
        {
            v.push_back(k.second);
        }
        sort(v.begin(),v.end(),greater<int>());
        int n=v.size();
        
        int fir=0;
        int sec=0;
        int thir=0;
        int fou=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(fir<8)
            {
                ans+=1*v[i];
                   fir++;
                
                  }
            else if(sec<8)
            {
                ans+=2*v[i];
                sec++;
            }
            else if( thir<8)
            {
                ans+=3*v[i];
                thir++;
            }
            else if(fou<2)
            {
                ans+=4*v[i];
                fou++;
            }
          
        }
        return ans;
        
       
    }
};