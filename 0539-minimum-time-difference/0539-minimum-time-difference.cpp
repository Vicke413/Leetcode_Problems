class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int ans=INT_MAX;

        int n=timePoints.size();

        vector<int>times;

        for(int i=0;i<n;i++)
        {
            string time=timePoints[i];


            int hr=stoi(time.substr(0,2));
            int min=stoi(time.substr(3,2));
            times.push_back(hr*60 + min);
        
        }


        sort(times.begin(),times.end());


        for(int i=0;i<times.size()-1;i++)
        {
            ans=min(ans,times[i+1]-times[i]);
        }

int nn=times.size()-1;
        return min(ans,(1440-times[nn])+times[0]);

    }
};