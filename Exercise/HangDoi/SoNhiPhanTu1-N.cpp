#include<bits/stdc++.h>
using namespace std;

vector<string> sinhNhiPhan(int n) {
    vector<string> res;
    queue<string> q;
    q.push("1");

    for (int i = 0; i < n; ++i) {
        string current = q.front();
        q.pop();
        res.push_back(current);
        q.push(current + "0");
        q.push(current + "1");
    }

    return res;
}

main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> np = sinhNhiPhan(n);
        for (int i = 0; i < np.size(); ++i) {
            cout << np[i];
            if (i != np.size() - 1)
                cout << " ";
        }
        cout << endl;
    }
}