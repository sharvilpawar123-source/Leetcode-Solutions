class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));

        int stR = 0, stCol = 0;
        int endR = n - 1, endCol = n - 1;
        int val = 1;

        while (stR <= endR && stCol <= endCol) {

            // Top Row
            for (int i = stCol; i <= endCol; i++) {
                ans[stR][i] = val++;
            }
            stR++;

            // Right Column
            for (int i = stR; i <= endR; i++) {
                ans[i][endCol] = val++;
            }
            endCol--;

            // Bottom Row
            if (stR <= endR) {
                for (int i = endCol; i >= stCol; i--) {
                    ans[endR][i] = val++;
                }
                endR--;
            }

            // Left Column
            if (stCol <= endCol) {
                for (int i = endR; i >= stR; i--) {
                    ans[i][stCol] = val++;
                }
                stCol++;
            }
        }

        return ans;
    }
};