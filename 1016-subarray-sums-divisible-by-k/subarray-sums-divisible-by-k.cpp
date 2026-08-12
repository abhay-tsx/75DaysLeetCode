#include <vector>

// Fast I/O block that executes before main() starts
const auto fastIO = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int subarraysDivByK(std::vector<int>& nums, int k) {
        // Using a flat array instead of std::vector avoids overhead
        int remainder_counts[10001] = {0}; 
        remainder_counts[0] = 1;

        int prefix_sum = 0;
        int rep = 0;

        // Use modern range-based loop to eliminate index calculation overhead
        for (const int num : nums) {
            prefix_sum += num;
            
            // Fast normalization for negative values
            int remainder = prefix_sum % k;
            if (remainder < 0) {
                remainder += k;
            }

            rep += remainder_counts[remainder];
            remainder_counts[remainder]++;
        }

        return rep;
    }
};
