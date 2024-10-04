class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
       long long ans=0;
        sort(skill.begin(),skill.end());
        if(n==2)
        {
            return skill[0]*skill[1];
        }
        else
        {
           int es=skill[0] +skill[n-1];
           int l=0;
           int r=n-1;
    
           while(l<r)
           {
                int su=skill[l]+skill[r];
              
                if(su!=es)
                return -1;
                ans+=skill[l]*skill[r];
                  l++;
                r--;
        
           }
        }
        return ans;
        
    }
};