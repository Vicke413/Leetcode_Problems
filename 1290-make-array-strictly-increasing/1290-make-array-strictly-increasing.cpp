#include <vector>
#include <map>
#include <algorithm>
#include <climits>

class Solution {
public:
    std::map<std::pair<int, int>, int> mp;

    int solve(std::vector<int>& arr1, std::vector<int>& arr2, int index, int prev) {
        if (index >= arr1.size()) {
            return 0;
        }

        if (mp.find({index, prev}) != mp.end()) {
            return mp[{index, prev}];
        }

        int res1 = 1e9 + 1;
        if (arr1[index] > prev) {
            res1 = solve(arr1, arr2, index + 1, arr1[index]);
        }

        int res2 = 1e9 + 1;
        auto it = std::upper_bound(arr2.begin(), arr2.end(), prev);
        if (it != arr2.end()) {
            int j = it - arr2.begin();
            res2 = 1 + solve(arr1, arr2, index + 1, arr2[j]);
        }

        return mp[{index, prev}] = std::min(res1, res2);
    }

    int makeArrayIncreasing(std::vector<int>& arr1, std::vector<int>& arr2) {
        std::sort(arr2.begin(), arr2.end());
        mp.clear();
        
        int res = solve(arr1, arr2, 0, INT_MIN);

        if (res == 1e9 + 1) {
            return -1;
        } else {
            return res;
        }
    }
};
