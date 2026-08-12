#include <bits/stdc++.h> 
using namespace std; 

class Solution { 
public: 
    int findKthLargest(vector<int>& nums, int k) { 
        // 1. Sort the numbers from smallest to largest
        sort(nums.begin(), nums.end()); 
        
        int count = 0; 
        
        // 2. Loop backward from the very last element
        for (int i = nums.size() - 1; i >= 0; i--) { 
            count++; 
            
            // 3. When count matches k, you found the element
            if (count == k) { 
                return nums[i]; 
            } 
        } 
        return -1; // Fallback return statement
    } 
};
