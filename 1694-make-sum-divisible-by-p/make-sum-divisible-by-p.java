class Solution {
    public int minSubarray(int[] nums, int p) {
        long totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }
        
        int rem = (int) (totalSum % p);
        if (rem == 0) {
            return 0; 
        }
        
        int n = nums.length;
        int minLen = n;
        long prefixSum = 0;
        
        java.util.Map<Integer, Integer> map = new java.util.HashMap<>();
        map.put(0, -1);
        
        for (int i = 0; i < n; i++) {
            prefixSum += nums[i];
            int currentMod = (int) (prefixSum % p);
            
            int targetMod = (currentMod - rem + p) % p;
            if (map.containsKey(targetMod)) {
                minLen = Math.min(minLen, i - map.get(targetMod));
            }
            
            map.put(currentMod, i);
        }
        
        return minLen == n ? -1 : minLen;
    }
}
