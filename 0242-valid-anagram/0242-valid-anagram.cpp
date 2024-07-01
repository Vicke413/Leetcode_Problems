class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp1;
      

        if(t.size()!=s.size())
        return false;
        int n=s.size();

        for(char p:s)
        {
            mpp1[p]++;
            
        }

        for(char p:t)
        {
            if(mpp1.find(p)==mpp1.end())
            return false;
            else
            mpp1[p]--;

            if(mpp1[p]==0)
            mpp1.erase(p);
        }
       
       return true;
        
    }
};