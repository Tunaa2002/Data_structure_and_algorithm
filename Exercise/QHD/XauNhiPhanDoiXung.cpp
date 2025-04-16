#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    vector<vector<bool>> L(n, vector<bool>(n, false));

    for (int i = 0; i < n; i++) L[i][i] = true;

    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            if (s[i] == s[j]) {
                if (len == 2) L[i][j] = true;
                else L[i][j] = L[i+1][j-1];
            }
        }
    }

    int M;
    cin >> M;
    while (M--) {
        int l, r;
        cin >> l >> r;
        if (L[l-1][r-1]) cout << "YES\n";
        else cout << "NO\n";
    }
}
