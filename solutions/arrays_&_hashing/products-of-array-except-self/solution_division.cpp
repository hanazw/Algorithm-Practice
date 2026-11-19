#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int> &nums) {
        int size = nums.size();
        if (size < 2) {
            return nums;
        }

        int product = 1;
        int zero_count = 0;
        for (int num : nums) {
            if (num == 0) {
                zero_count++;
            } else {
                product *= num;
            }
        }

        if (zero_count > 1) {
            return std::vector<int>(size, 0);
        }

        if (zero_count == 1) {
            for (int &num : nums) {
                num = num != 0 ? 0 : product;
            }
            return nums;
        }

        for (int &num : nums) {
            num = product / num;
        }
        return nums;
    }
};
