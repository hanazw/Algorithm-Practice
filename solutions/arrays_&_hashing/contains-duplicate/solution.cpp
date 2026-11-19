#include <unordered_set>
#include <vector>

class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> hash_set;
        for (int num : nums) {
            if (hash_set.contains(num)) {
                return true;
            }
            hash_set.insert(num);
        }
        return false;
    }
};