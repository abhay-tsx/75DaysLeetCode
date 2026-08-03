class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        // 1. Shift all non-zero elements to the front
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                nums[i] = nums[j];
                i++;
            }
        }
        // 2. Fill the remaining positions with zeroes
        while (i < nums.size()) {
            nums[i] = 0;
            i++;
        }
    }
};
