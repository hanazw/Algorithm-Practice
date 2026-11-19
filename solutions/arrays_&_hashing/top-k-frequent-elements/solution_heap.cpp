#include <vector>
#include <unordered_map>
#include <queue>
#include <functional>

/*
Time: O(nlogk)
Space: O(n + k)
*/

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> num_counts;
        std::priority_queue<std::pair<int, int>, 
                            std::vector<std::pair<int, int>>, 
                            std::greater<std::pair<int, int>>> heap;
        
        for (int num : nums) {
            num_counts[num]++;
        }

        for (auto& entry : num_counts) {
            heap.push({entry.second, entry.first});
            if (heap.size() > k) {
                heap.pop();
            }
        }

        std::vector<int> top_k;
        for (int i = 0; i < k; i++) {
            top_k.push_back(heap.top().second);
            heap.pop();
        }
        return top_k;
    }
};
