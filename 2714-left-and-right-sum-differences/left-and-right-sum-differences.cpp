class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int leftSum = 0;
        int rightSum = 0;

        // Calculate the total sum of the array for the initial right sum
        for (int x : nums) {
            rightSum += x;
        }

        // Iterate through the array and update left and right sums
        for (int i = 0; i < n; i++) {
            rightSum -= nums[i];
            res[i] = abs(leftSum - rightSum);
            leftSum += nums[i];
        }

        return res;
    }
};
