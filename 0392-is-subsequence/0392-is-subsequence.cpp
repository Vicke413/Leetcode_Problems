class Solution {
public:
    bool isSubsequence(string s, string t) {
      

      int i=0;
int ans=0;
      for(int j=0;j<t.size();j++)
      {
        if(s[i]==t[j])
        {
            i++;
            ans++;
        }
      }
      if(ans>=s.size())
      return true;
      else
      return false;
    }
};