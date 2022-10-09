class Solution
{
public:
    bool check(int i, int j, int k, vector<vector<char>> &board)
    {
        for (int p = 0; p < 9; p++)
        {
            if (board[i][p] - '0' == k)
                return false;
            if (board[p][j] - '0' == k)
                return false;
        }
        int x = i / 3 * 3, y = j / 3 * 3;
        for (int p = x; p < x + 3; p++)
        {
            for (int r = y; r < y + 3; r++)
            {
                if (board[p][r] - '0' == k)
                    return false;
            }
        }
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
                    for (int k = 1; k <= 9; k++)
                    {
                        if (check(i, j, k, board))
                        {
                            board[i][j] = '0' + k;
                            if (solve(board))
                                return true;
                            board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>> &board)
    {
        solve(board);
    }
};