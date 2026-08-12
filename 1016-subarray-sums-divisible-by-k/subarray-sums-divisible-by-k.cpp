class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // Array to store how many times each remainder (0 to k-1) occurs
        vector<int> remainder_counts(k, 0);
        
        // Base case: A prefix sum of 0 has a remainder of 0, which happens 1 time initially
        remainder_counts[0] = 1;
        
        int prefix_sum = 0;
        int rep = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            prefix_sum += nums[i];
            
            // Correct C++ modulo formula for negative numbers
            int remainder = ((prefix_sum % k) + k) % k;
            
            // If we have seen this remainder before, it forms valid subarrays
            rep += remainder_counts[remainder];
            
            // Record that we saw this remainder one more time
            remainder_counts[remainder]++;
        }
        
        return rep;
    }
};
