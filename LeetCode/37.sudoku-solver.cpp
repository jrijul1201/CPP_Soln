/*
 * @lc app=leetcode id=37 lang=cpp
 *
 * [37] Sudoku Solver
 */

// @lc code=start
class Solution {
public:
bool isSafe(char c, int i, int j, vector<vector<char>>&board)
    {
        for (int x = 0; x < 9; x++)
            if (board[i][x] == c || board[x][j] == c || board[(i / 3) * 3 + x / 3][(j / 3) * 3 + x % 3] == c)
                return false;
        return true;
    }
    bool solve(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] == '.')
                {
                    for (char c = '1'; c <= '9'; c++)
                    {
                        if (isSafe(c, i, j, board))
                        {
                            board[i][j] = c;
                            if (solve(board))
                            {
                                return true;
                            }
                            else
                            {
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
// @lc code=end

