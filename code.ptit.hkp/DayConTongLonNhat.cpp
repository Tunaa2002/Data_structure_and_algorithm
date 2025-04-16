#include <bits/stdc++.h>
using namespace std;

main() {
    int n,q,l,r;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    while(q--) {
        cin>>l>>r;
        if (l >= r) {
            cout << 0 << endl;
            continue;
        }
        int len = r - l + 1;
        vector<int> L(len);
        for (int i = 0; i < len; i++) {
            L[i] = a[l - 1 + i];
            for (int j = 0; j < i; j++) {
                if (a[l - 1 + i] > a[l - 1 + j]) {
                    L[i] = max(L[i], L[j] + a[l - 1 + i]);
                }
            }
        }
        cout<<*max_element(L.begin(),L.end())<<endl;
    }
}