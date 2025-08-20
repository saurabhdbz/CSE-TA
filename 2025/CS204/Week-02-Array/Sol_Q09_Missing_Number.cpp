#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long sum = 0, num;
    long long total = 1LL * n * (n + 1) / 2; // sum of 1..n
    
    for (int i = 0; i < n - 1; i++) {
        cin >> num;
        sum += num;
    }
    
    cout << (total - sum) << endl;
    return 0;
}
