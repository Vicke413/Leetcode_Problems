class Solution {
public:
    bool doesAliceWin(string s) {
        
        
        int n=s.size();
  
       int c=0;
        
        set <char>ss={'a','e','i','o','u'};
        
        for(int i=0;i<n;i++)
        {
            if(ss.find(s[i])!=ss.end())
            {
     
                c++;
            }
        }
        
        // leetcoder
        // 012223344
      if(c==0)
          return false;
        return true;
        
       
        
    }
};