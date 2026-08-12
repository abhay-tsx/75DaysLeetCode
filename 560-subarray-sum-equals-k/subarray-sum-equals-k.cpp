#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int totalSubarrays = 0;
        int currentPrefixSum = 0;
        
        // Map to store frequency of prefix sums
        unordered_map<int, int> prefixSumFrequency;
        
        // Base case: A prefix sum of 0 has occurred once
        prefixSumFrequency[0] = 1;
        
        for (int num : nums) {
            // Update the running prefix sum
            currentPrefixSum += num;
            
            // Check if (currentPrefixSum - k) exists in the map
            int targetPrefixSum = currentPrefixSum - k;
            if (prefixSumFrequency.find(targetPrefixSum) != prefixSumFrequency.end()) {
                totalSubarrays += prefixSumFrequency[targetPrefixSum];
            }
            
            // Record the current prefix sum in the map
            prefixSumFrequency[currentPrefixSum]++;
        }
        
        return totalSubarrays;
    }
};
