#include <vector>
using namespace std;

vector<int> spirallyTraverse(vector<vector<int>> &mat) {
    vector<int> result;
    int m = mat.size();      // Rows
    int n = mat[0].size();   // Columns

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // Move left to right
        for (int i = left; i <= right; i++)
            result.push_back(mat[top][i]);
        top++;

        // Move top to bottom
        for (int i = top; i <= bottom; i++)
            result.push_back(mat[i][right]);
        right--;

        // Move right to left (if rows remain)
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                result.push_back(mat[bottom][i]);
            bottom--;
        }

        // Move bottom to top (if columns remain)
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                result.push_back(mat[i][left]);
            left++;
        }
    }

    return result;
}
