#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> H(n);
    for (int i = 0; i < n; i++) cin >> H[i];

    vector<int> L(n, INT_MAX);
    L[0] = 0;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i - j >= 0) {
                L[i] = min(L[i], L[i - j] + abs(H[i] - H[i - j]));
            }
        }
    }

    cout << L[n - 1] << endl;
}
