#include <vector>  
#include <algorithm>  
#include <unordered_map>  

class Solution {  
public:  
    void helper(std::vector<int>& candidates, std::vector<std::vector<int>>& ans,  
                std::vector<int>& temp, int i, int target) {  
        
        // Base case: when the target is met  
        if (target == 0) {  
            ans.push_back(temp);  // Add valid combination to results  
            return;  
        }  
        
        // If we have gone through all candidates or have exceeded target  
        if (i == candidates.size() || target < 0) {  
            return;  
        }  

        // Include the current candidate  
        temp.push_back(candidates[i]);  
        helper(candidates, ans, temp, i + 1, target - candidates[i]);  
        temp.pop_back();  // Backtrack  

        // Skip duplicates for the next candidates  
        while (i + 1 < candidates.size() && candidates[i] == candidates[i + 1]) {  
            i++;  
        }  

        // Exclude the current candidate  
        helper(candidates, ans, temp, i + 1, target);  
    }  
    
    std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target) {  
        std::sort(candidates.begin(), candidates.end()); // Sort to handle duplicates  
        std::vector<std::vector<int>> ans;  
        std::vector<int> temp;  


        helper(candidates, ans, temp, 0, target);  

        return ans;  
    }  
};