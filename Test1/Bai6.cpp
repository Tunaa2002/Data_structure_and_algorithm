#include <bits/stdc++.h>
using namespace std;

main() {
    int n,q;
    cin>>n>>q;
    vector<int>a(n+1), pos(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pos[i] = pos[i-1] + max(0,a[i]);
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pos[r]-pos[l-1]<<endl;
    }
}