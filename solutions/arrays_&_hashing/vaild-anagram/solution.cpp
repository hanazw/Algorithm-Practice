#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) {
            return false;
        }

        std::unordered_map<char, int> hash_map;
        for (char ch : s) {
            hash_map[ch] ++;
        }

        for (char ch : t) {
            if (!hash_map.contains(ch)) {
                return false;
            }
            hash_map[ch]--;
            if (hash_map[ch] < 0) {
                return false;
            }
        }

        return true;
    }
};