class Solution {
public:
    bool isValid(vector<vector<char>>& board, int row, int col, char dig) {
        // horizontally
        for (int j = 0; j < board[0].size(); j++) {
            if (j!=col && board[row][j] == dig)
                return false;
        }
        // vertically
        for (int i = 0; i < board.size(); i++) {
            if (i!=row && board[i][col] == dig)
                return false;
        }
        // for grid
        int str = (row / 3) * 3;
        int stcol = (col / 3) * 3;
        for (int i = str; i <= str + 2; i++) {
            for (int j = stcol; j <= stcol + 2; j++) {
                if ((i != row || j != col) && board[i][j] == dig)
                    return false;
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] != '.') {
                    if (isValid(board, i, j, board[i][j]) == false) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};