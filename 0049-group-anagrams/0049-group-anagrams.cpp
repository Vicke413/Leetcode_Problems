class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>sol;
        vector<vector<string>>ans;

      for(string ss:strs)
      {
          string s=ss;
          sort(ss.begin(),ss.end());
          sol[ss].push_back(s);
      }

      for(auto c: sol)
      {
          ans.push_back(c.second);
      }
      sort(ans.begin(),ans.end());
      return ans;

    }
};