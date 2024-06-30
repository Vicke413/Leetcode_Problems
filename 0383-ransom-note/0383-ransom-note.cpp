class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

       unordered_map<char,int>mpp1;

 for(auto i:magazine) 
       {
           mpp1[i]++;
       }
       for(auto i: ransomNote)
       {
           mpp1[i]--;
       } 
      

       for(auto i:mpp1)
       {
           if(i.second<0)
           return false;
       }
       return true;
    }
};