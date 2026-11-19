#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> hash_map;
        for (int i = 0; i < nums.size(); i++) {
            if (hash_map.contains(target - nums[i])) {
                return {hash_map[target - nums[i]], i};
            }
            hash_map[nums[i]] = i;
        }
        return {-1};
    }
};
