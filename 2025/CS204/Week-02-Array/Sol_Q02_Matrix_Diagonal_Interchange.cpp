#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    // Interchange diagonals
    for (int i = 0; i < n; i++) {
        // Swap primary diagonal (i,i) with secondary diagonal (i, n-i-1)
        swap(mat[i][i], mat[i][n - i - 1]);
    }

    // Print updated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
