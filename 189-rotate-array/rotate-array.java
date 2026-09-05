class Solution {
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        k = k % n;
        if (k == 0) return; // Quick escape if no rotation is needed

        // 1. Create the temp array to hold the last k elements
        int[] temp = new int[k];
        
        // 2. Copy the last k elements into temp
        System.arraycopy(nums, n - k, temp, 0, k);
        
        // 3. Shift the remaining elements to the right
        System.arraycopy(nums, 0, nums, k, n - k);
        
        // 4. Copy the temp elements back to the front
        System.arraycopy(temp, 0, nums, 0, k);
    }
}
