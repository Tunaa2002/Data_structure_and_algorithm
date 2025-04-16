#include <bits/stdc++.h>
using namespace std;

int n;
string a[10], s, b[10];
bool c[10];

void in() {
    for (int i=1; i<=n-1; i++) cout<<b[i]<<" ";
    cout<<s<<endl;
}

void quaylui(int i) {
    for (int j=0; j<n; j++) {
        if (!c[j] && a[j] != s) {
            c[j] = true;
            b[i] = a[j];
            if (i == n - 1) in();
            else quaylui(i + 1);
            c[j] = false;
        }
    }
}

int main() {
    cin>>n;
    for (int i=0; i<n; i++) cin>>a[i];
    cin>>s;

    sort(a, a+n);

    quaylui(1);
}
