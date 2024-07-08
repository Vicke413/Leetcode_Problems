class Solution {
public:
    int findTheWinner(int n, int k) {
        

        queue<int>qq;

        for(int i=1;i<=n;i++)
        {
            qq.push(i);
        }

        while(qq.size()>1)
        {
            for(int i=1;i<k;i++)
            {
                qq.push(qq.front());
                qq.pop();
            }
            qq.pop();
        }
        return qq.front();
    }
};