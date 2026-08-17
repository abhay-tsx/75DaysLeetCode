class Solution {
public:
    int mySqrt(int x) {
        long long i = 0;
        
        // Keep moving forward as long as the square is less than or equal to x
        while (i * i <= x) {
            i++;
        }
        
        // Go back one step because i*i just exceeded x
        return i - 1;
    }
};
