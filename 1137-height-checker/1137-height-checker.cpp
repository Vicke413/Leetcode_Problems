class Solution {
public:
    int heightChecker(vector<int>& heights) {

        vector<int>dup(heights.begin(),heights.end());
        sort(dup.begin(),dup.end());
        int ans=0;
int n=heights.size();
        for(int i=0;i<n;i++)
        {
            if(dup[i]!=heights[i])
            ans++;
        }
        return ans;
        
    }
};