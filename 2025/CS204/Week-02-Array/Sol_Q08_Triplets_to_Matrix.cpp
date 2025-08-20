#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n, k;
    cin >> m >> n;  // dimensions of the matrix
    cin >> k;       // number of triplets

    // Initialize matrix with zeros
    vector<vector<int>> matrix(m, vector<int>(n, 0));

    // Fill values from triplets
    for (int i = 0; i < k; i++) {
        int r, c, val;
        cin >> r >> c >> val;
        matrix[r][c] = val;
    }

    // Print reconstructed matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j];
            if (j < n - 1) cout << " "; // spacing between columns
        }
        cout << endl; // new line for each row
    }

    return 0;
}
