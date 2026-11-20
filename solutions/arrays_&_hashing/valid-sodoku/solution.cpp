#include <vector>
#include <unordered_set>

class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        std::vector<std::unordered_set<char>> rows(9);
        std::vector<std::unordered_set<char>> cols(9);
        std::vector<std::unordered_set<char>> grids(9);

        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                char element = board[row][col];
                if (element == '.') {
                    continue;
                }

                if (rows[row].contains(element) ||
                    cols[col].contains(element) ||
                    grids[3 * (row / 3) + col / 3].contains(element)) {
                    return false;
                }

                rows[row].insert(element);
                cols[col].insert(element);
                grids[3 * (row / 3) + col / 3].insert(element);
            }
        }

        return true;
    }
};