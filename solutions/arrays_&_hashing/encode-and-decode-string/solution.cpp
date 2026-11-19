#include <string>
#include <vector>
#include <format>

// size len1 str1 len2 str2 ...

class Solution {
public:
    std::string encode(std::vector<std::string>& strs) {
        std::string s(std::format("{:02x}", strs.size()));
        for (const std::string& str : strs) {
            s.append(std::format("{:02x}", str.size()));
            s.append(str);
        }
        return s;
    }

    std::vector<std::string> decode(std::string s) {
        int size = std::stoi(s.substr(0, 2), nullptr, 16);
        std::vector<std::string> strs(size);
        int idx = 2;
        for (int i = 0; i < size; i++) {
            int len = std::stoi(s.substr(idx, 2), nullptr, 16);
            idx += 2;
            strs[i] = s.substr(idx, len);
            idx += len;
        }
        return strs;
    }
};
