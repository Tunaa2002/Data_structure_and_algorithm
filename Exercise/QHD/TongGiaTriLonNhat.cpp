#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, M;
    cin >> n >> M;

    vector<int> x(n);
    vector<int> y(n);

    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }

    vector<int> L(M + 1, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = M; j >= x[i]; --j) {
            L[j] = max(L[j], L[j - x[i]] + y[i]);
        }
    }

    cout << L[M] << endl;
}
