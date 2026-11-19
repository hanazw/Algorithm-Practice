#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        if (strs.size() == 0 || strs.size() == 1) {
            return {strs};
        }

        std::vector<std::vector<std::string>> results;

        std::unordered_map<std::string, int> ch_patterns; // pattern -> result index
        for (std::string str : strs) {
            std::string sorted_str(str);
            std::sort(sorted_str.begin(), sorted_str.end());

            if (ch_patterns.contains(sorted_str)) {
                results[ch_patterns[sorted_str]].push_back(str);
            } else {
                results.push_back({str});
                ch_patterns[sorted_str] = results.size() - 1;
            }
        }
        return results;
    }
};
