class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = 0;
        int max2 = 0;
        
        for (int num : nums) {
            if (num > max1) {
                max2 = max1; // Previous max becomes second max
                max1 = num;  // Update new highest max
            } else if (num > max2) {
                max2 = num;  // Update only the second max
            }
        }
        
        return (max1 - 1) * (max2 - 1);
    }
};
