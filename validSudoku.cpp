#include <bits/stdc++.h>
using namespace std;

bool checkColumns(vector<vector<char>> &board)
{
    unordered_map<char, int> umap;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (umap[board[j][i]] == 0)
            {
                umap[board[j][i]]++;
            }
            else if (umap[board[j][i]] > 0)
            {

                if (board[j][i] != '.')
                {
                    return false;
                }
            }
        }

        umap.clear();
    }

    return true;
}

bool checkRows(vector<vector<char>> &board)
{
    unordered_map<char, int> umap;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (umap[board[i][j]] == 0)
            {
                umap[board[i][j]]++;
            }
            else if (umap[board[i][j]] > 0)
            {

                if (board[i][j] != '.')
                {
                    return false;
                }
            }
        }

        umap.clear();
    }

    return true;
}

bool helperMatrixChecker(vector<vector<char>> &board, int p, int q)
{
    unordered_map<char, int> umap;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // cout<<board[p+i][q+j]<<" ";
            if (board[p + i][q + j] != '.' && umap[board[p + i][q + j]] > 0)
            {
                return false;
            }
            else if (umap[board[p + i][q + j]] == 0)
            {
                umap[board[p + i][q + j]]++;
            }
        }
        // cout<<endl;
    }

    return true;
}

bool checkMatrix(vector<vector<char>> &board)
{
    for (int i = 0; i < 9; i += 3)
    {
        for (int j = 0; j < 9; j += 3)
        {
            // 0 0 //0 3 //0 6
            // 3 0 //3 3 //3 6
            // 6 0 //6 3 //6 6

            if (helperMatrixChecker(board, i, j) == false)
            {
                return false;
            }
        }
    }

    return true;
}
bool isValidSudoku(vector<vector<char>> &board)
{

    return checkColumns(board) && checkRows(board) && checkMatrix(board);
}

int main()
{

    vector<vector<char>> test = {
     {'8', '3', '.', '.', '7', '.', '.', '.', '.'},
     {'6', '.', '.', '1', '9', '5', '.', '.', '.'}, 
     {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
     {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
     {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
     {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
     {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
     {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
     {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
     };

    cout << isValidSudoku(test) << endl;
}