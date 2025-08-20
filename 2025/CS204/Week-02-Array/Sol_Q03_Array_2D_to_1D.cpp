#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int arr[m][n];  // 2D array

    // Input matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Flatten row-major order and print
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;

    return 0;
}
