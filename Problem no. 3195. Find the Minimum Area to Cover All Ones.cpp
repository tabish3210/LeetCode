PROBLEM  NUMBER                                                     :                                               3195. Find the Minimum Area to Cover All Ones I


// Friday, 22 August 2025


// Array | Matrix | Math

class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int minRow = m, maxRow = -1;
        int minCol = n, maxCol = -1;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    minRow = min(minRow, i);
                    maxRow = max(maxRow, i);
                    minCol = min(minCol, j);
                    maxCol = max(maxCol, j);
                }
            }
        }
        return (maxRow - minRow + 1) * (maxCol - minCol + 1);
    }
};


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Simmailar

class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        int top = row;
        int left = col;
        int bottom = -1;
        int right = -1;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 1) {
                    top = min(top, i);
                    bottom = max(bottom, i);
                    left = min(left, j);
                    right = max(right, j);
                }
            }
        }

        return (bottom - top + 1) * (right - left + 1);
    }
};

//////////////////////
