#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i, c = 0; // Initialize c to 0 in case the peak is at the first element
        
        // Scan through the array
        for (i = 0; i < nums.size() - 1; i++) {
            // If the current element is greater than the next one, it's a peak!
            if (nums[i] > nums[i + 1]) {
                c = i;
                return c; // Return immediately since we found a peak
            }
        }
        
        // If we reach the end without finding a drop, the last element is the peak
        return nums.size() - 1;
    }
};
