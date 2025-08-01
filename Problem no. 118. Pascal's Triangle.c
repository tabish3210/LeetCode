PROBLEM  NUMBER                                                       :                                                 118. Pascal's Triangle

  // Date : 01 Aug 2025


// DP|  Matrix | Combinatorics

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        triangle.push_back({1});

        for (int rowNum = 1; rowNum < numRows; ++rowNum) {
            vector<int> row;
            vector<int>& prevRow = triangle[rowNum - 1];

            row.push_back(1);

            for (int j = 1; j < rowNum; ++j) {
                row.push_back(prevRow[j - 1] + prevRow[j]);
            }

            row.push_back(1);
            triangle.push_back(row);
        }

        return triangle;
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////




//  Using Combinatorial Formula  

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                row[j] = result[i - 1][j - 1] + result[i - 1][j];
            }
            result.push_back(row);
        }
        return result;
    }
};

//////////////////////////////////                         ////////////////////////
