#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int n = s.size();
        vector<vector<bool>> L(n, vector<bool>(n, false));
        int maxLen = 1;

        for (int i = 0; i < n; i++) L[i][i] = true;

        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                L[i][i + 1] = true;
                maxLen = 2;
            }
        }

        for (int len = 3; len <= n; len++) {
            for (int i = 0; i <= n - len; i++) {
                int j = i + len - 1;
                if (s[i] == s[j] && L[i + 1][j - 1]) {
                    L[i][j] = true;
                    maxLen = len;
                }
            }
        }

        cout << maxLen << endl;
    }
}
