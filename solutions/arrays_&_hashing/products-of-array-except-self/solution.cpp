#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int size = nums.size();
        if (size < 2) {
            return nums;
        }

        std::vector<int> prefix_products(size);
        prefix_products[0] = 1;
        int product = nums[0];
        for (int i = 1; i < size; i++) {
            prefix_products[i] = product;
            product *= nums[i];
        }

        product = nums[size - 1];
        nums[size - 1] = prefix_products[size - 1];
        for (int i = size - 2; i >= 0; i--) {
            int temp = nums[i];
            nums[i] = product * prefix_products[i];
            product *= temp;
        }
        return nums;
    }
};
