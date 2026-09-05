class Solution { 
    public void moveZeroes(int[] nums) {
        // 1. Corrected null check order to prevent crashes
        if (nums == null || nums.length < 2) return;
        
        int n = nums.length; 
        int count = 0; 
        int tCount = 0; // Pointer to track elements in temp
        
        int[] temp = new int[n]; // 2. Initialized the temp array
        int[] ans = new int[n]; 
        
        for (int i = 0; i < n; i++) { 
            if (nums[i] != 0) { 
                ans[count] = nums[i]; // 3. Fixed syntax: specified the index
                count++; 
            } else { 
                temp[tCount] = nums[i]; // 4. Fixed syntax and added tracking
                tCount++;
            } 
        } 
        
        // 5. Appends the zeroes from temp to the end of ans
        System.arraycopy(temp, 0, ans, count, tCount); 
        
        // 6. Overwrites the original nums array so LeetCode sees your answer
        System.arraycopy(ans, 0, nums, 0, n);
    } 
}
