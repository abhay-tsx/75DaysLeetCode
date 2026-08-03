#include <vector>
#include <algorithm> // Required for std::remove

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // 1. std::remove is a global function, not a member of nums
        // 2. Changed 'v.end()' to 'nums.end()'
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        
        return nums.size();
    }
};
