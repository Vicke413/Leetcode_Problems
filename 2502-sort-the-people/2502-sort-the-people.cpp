class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& height) {


        vector<string>ans;
int n=names.size();
      
      vector<pair<int,string>>v;
      for(int i=0;i<n;i++)
    {
        v.push_back({height[i],names[i]});
    }
        
        sort(v.rbegin(),v.rend());

     for(int i=0;i<n;i++)
    {
        ans.push_back(v[i].second);
    }
        return ans;
    }
};