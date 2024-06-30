class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int i,j;
        unordered_map<char,vector<int>>m1,m2;
        if(s.size()!=t.size())
        return false;
        for(int i=0;i<s.size();i++)
        {
            m1[s[i]].push_back(i);
        }
    for(int i=0;i<t.size();i++)
    {
        m2[t[i]].push_back(i);
    }
    for(int i=0;i<s.size();i++)
    {
        if(m1[s[i]]!=m2[t[i]])
        return false;
    }
     
        return true;
    }
};