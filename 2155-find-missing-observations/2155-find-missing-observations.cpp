#include <vector>
using namespace std;

class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size(); // Number of existing rolls
        int totalRolls = m + n; // Total number of rolls (existing + missing)
        
        // Total sum needed for the desired mean
        int totalSum = mean * totalRolls;
        
        // Calculate the sum of existing rolls
        int currentSum = 0;
        for (int roll : rolls) {
            currentSum += roll;
        }
      
        int missingSum = totalSum - currentSum;
        
      
        if (missingSum < n || missingSum > 6 * n) {
            return {};
        }
        
        // Initialize the result vector with the base value of 1 for each missing roll
        vector<int> result(n, 1);
        missingSum -= n; // We have already used up `n` points (one per roll)
        
        // Distribute the remaining sum across the missing rolls
        for (int i = 0; i < n && missingSum > 0; ++i) {
            int add = min(5, missingSum); // Each roll can only be increased by up to 5 (from 1 to 6)
            result[i] += add;
            missingSum -= add;
        }
        
        return result;
    }
};
