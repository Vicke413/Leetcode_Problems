#include <vector>  
using namespace std;  

class Solution {  
public:  
    int N = 1e9 + 7;   
    vector<vector<vector<int>>> dp;   

    int solve(vector<int>& nums, int i, int pre1, int pre2) {  

        if (i >= nums.size()) {  
            return 1;  
        }  

        
        if (dp[i][pre1][pre2] != -1) {  
            return dp[i][pre1][pre2];  
        }  

        int ans = 0; 

     
        for (int k = 0; k <= nums[i]; k++) {  
            int num1 = k;  
            int num2 = nums[i] - k;  

           
            if (num1 >= pre1 && num2 <= pre2) {  
                ans = (ans + solve(nums, i + 1, num1, num2)) % N; 
            }  
        }  

        dp[i][pre1][pre2] = ans; 
        return ans; 
    }  

    int countOfPairs(vector<int>& nums) {  
        int n = nums.size();  
        
        dp = vector<vector<vector<int>>>(n, vector<vector<int>>(51, vector<int>(51, -1)));  

        
        return solve(nums, 0, 0, 50);  
    }  
};