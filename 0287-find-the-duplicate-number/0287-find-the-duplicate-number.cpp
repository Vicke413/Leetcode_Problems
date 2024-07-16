class Solution {
public:
    int findDuplicate(vector<int>& nums) {

int n=nums.size();
set<int>non_duplicates;

        for(int i=0;i<n;i++)
        {
            int initial_size=non_duplicates.size();
            non_duplicates.insert(nums[i]);
            int last_size=non_duplicates.size();

            if(last_size==initial_size)
            return nums[i];
        }

        return -1;

    }
};