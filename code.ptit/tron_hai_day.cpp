#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> mergeArrays(vector<int>& A, vector<int>& B) {
    vector<int> merged;
    int i = 0, j = 0;

    while (i < A.size() && j < B.size()) {
        if (A[i] < B[j]) {
            merged.push_back(A[i]);
            i++;
        } else {
            merged.push_back(B[j]);
            j++;
        }
    }

    while (i < A.size()) {
        merged.push_back(A[i]);
        i++;
    }

    while (j < B.size()) {
        merged.push_back(B[j]);
        j++;
    }

    return merged;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        vector<int> A(n), B(m);
        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < m; i++)
            cin >> B[i];

        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        vector<int> merged = mergeArrays(A, B);

        for (int i = 0; i < merged.size(); i++)
            cout << merged[i] << " ";
        cout << endl;
    }

    return 0;
}
