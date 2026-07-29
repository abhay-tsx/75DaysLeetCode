class Solution {
public:
    int maxProduct(int n) {
        int l = 0;
        int s = 0;
        
        while (n > 0) {
            int c = n % 10;
            
            if (c > l) {
               
                s = l;
                l = c;
            } else if (c > s) {
                
                s = c;
            }
            
            n /= 10; 
        }
        
        return l * s;
    }
};