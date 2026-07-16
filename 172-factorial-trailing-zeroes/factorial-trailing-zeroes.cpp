class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        
        // Count multiples of 5, 25, 125, etc.
        while (n >= 5) {
            count += n / 5;
            n /= 5;
        }
        
        return count;
    }
};
