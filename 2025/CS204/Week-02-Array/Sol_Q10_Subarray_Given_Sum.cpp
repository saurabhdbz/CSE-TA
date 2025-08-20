#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    long long S;
    cin >> S;

    int start = 0;
    long long curr_sum = 0;
    bool found = false;

    for (int end = 0; end < n; end++) {
        curr_sum += arr[end];

        // Shrink the window while sum > S
        while (curr_sum > S && start <= end) {
            curr_sum -= arr[start];
            start++;
        }

        // Check if subarray sum == S
        if (curr_sum == S) {
            cout << start << " " << end << endl;
            found = true;
            break;
        }
    }

    if (!found) cout << -1 << endl;

    delete[] arr;
    return 0;
}
