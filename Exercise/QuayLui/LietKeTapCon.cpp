#include <bits/stdc++.h>
using namespace std;

int n;
string A[16];
int C[16];
set<string> res;

void quaylui(int i, int last) {
    for (int j = last + 1; j <= n; j++) {
        C[i] = j;
        string temp = "";
        for (int k = 1; k <= i; k++) {
            temp += A[C[k]];
        }
        res.insert(temp);
        quaylui(i + 1, j);
    }
}

int main() {
    cin>>n;
    for(int i=1; i<=n; i++) cin>>A[i];
    quaylui(1,0);
    for (const auto& s : res) {
        cout<< s << endl;
    }
}
