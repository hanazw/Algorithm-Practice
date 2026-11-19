#include <vector>
#include <unordered_map>
#include <algorithm>

/*
Time: O(nlogn)
Space: O(n)
*/

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> num_counts;
        std::vector<int> uni_nums;
        
        for (int num : nums) {
            if (!num_counts.contains(num)) {
                uni_nums.push_back(num);
            }
            num_counts[num]++;
        }

        std::sort(uni_nums.begin(), uni_nums.end(), [&](int a, int b) {
            return num_counts[a] > num_counts[b];
        });

        std::vector<int> top_k(k);
        for (int i = 0; i < k; i++) {
            top_k[i] = uni_nums[i];
        }
        return top_k;
    }
};
