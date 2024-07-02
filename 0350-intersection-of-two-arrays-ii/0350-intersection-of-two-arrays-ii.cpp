class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {


vector<int>ans;

        unordered_map<int,int>m;

        for(auto k:nums1)
        {
            m[k]++;
        }

        for(auto p:nums2)
        {
            if(m.find(p)!=m.end())
            {
                ans.push_back(p);
                m[p]--;
            }

            if(m[p]==0)
            m.erase(p);
        }

        return ans;
        


    }
};