class Solution {
public:
    string nearestPalindromic(string n) {

        if(n.length()==1)
        return to_string(stoi(n)-1);

        int digits=n.length();
        vector<long>can;
        can.push_back(pow(10,digits-1)-1);
        can.push_back(pow(10,digits)+1);

        int mid=(digits+1)/2;

        long pre=stol(n.substr(0,mid));

        vector<long>v={pre,pre+1,pre-1};

        for(long i:v)
        {
            string postfix=to_string(i);

            if(digits%2!=0)
            postfix.pop_back();
            reverse(postfix.begin(),postfix.end());
            string c=to_string(i)+postfix;
            can.push_back(stol(c));
        }
        long min_diff=LONG_MAX;
        long res;
        long num=stol(n);

        for(int i=0;i<5;i++)
        {
            if(can[i]!=num && abs(can[i]-num)<min_diff)
            {
                min_diff=abs(can[i]-num);
                res=can[i];
            }
            else if(abs(can[i]-num)==min_diff)
            res=min(res,can[i]);
        }
        return to_string(res);
    }
};