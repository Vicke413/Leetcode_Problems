class Solution {
public:
    string largestNumber(vector<int>& nums) {


    vector<string>ans;

        for(int k:nums)
        {
           ans.push_back(to_string(k));
        }
        string kk="";
          sort(ans.begin(), ans.end(), [](const string &a, const string &b) {
            return a + b > b + a;  
        });

        if(ans[0] == "0") return "0";

        string result = "";
        for(const string &s : ans) {
            result += s;
        }
        return result;
    }
};