class Solution {
public:
    bool isPalindrome(int x) {
        

        // if it reads a neg  not palindrome
        if(x<0)
        return false;

        string temp="";
        temp+=to_string(x);
        int n=temp.size();
        int l=0;
        int r=n-1;

       // just  by using two pointers
        while(l<r)
        {
            if(temp[l]!=temp[r])
            return false;
            l++;
            r--;
        }
        return true;

    }
};