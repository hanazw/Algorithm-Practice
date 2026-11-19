#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> num_counts;
        for (int num : nums) {
            num_counts[num]++;
        }

        std::vector<std::vector<int>> freq(nums.size() + 1);
        for (auto& entry : num_counts) {
            freq[entry.second].push_back(entry.first);
        }

        std::vector<int> top_k;
        for (int i = nums.size(); i > 0; i--) {
            for (int num : freq[i]) {
                top_k.push_back(num);
                if (top_k.size() == k) {
                    return top_k;
                }
            }
        }
        return top_k;
    }
};
