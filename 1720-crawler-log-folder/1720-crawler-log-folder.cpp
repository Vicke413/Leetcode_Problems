class Solution {
public:
    int minOperations(vector<string>& logs) {
        

        int n=logs.size();
        int ans=0;

        for(int i=0;i<n;i++)
        {
            string temp="";
            int c=0;
            for(char cc:logs[i])
            {
                if(cc=='.')
                c++;
            }

            if(c==0)
            ans++;
            else if(c==1)
            continue;
            else 
            {
            ans--;
            ans=max(ans,0);
            }

        }
        if(ans<=0)
        return 0;

        return ans;
    }
};