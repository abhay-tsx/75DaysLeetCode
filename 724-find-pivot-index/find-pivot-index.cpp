class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;
        
        // Calculate the total sum of all elements
        for (int num : nums) {
            totalSum += num;
        }
        
        // Find the pivot index
        for (int i = 0; i < nums.size(); i++) {
            // Right sum is total sum minus left sum minus the current element
            if (leftSum == totalSum - leftSum - nums[i]) {
                return i;
            }
            leftSum += nums[i];
        }
        
        return -1; // Return -1 if no pivot index exists
    }
};
