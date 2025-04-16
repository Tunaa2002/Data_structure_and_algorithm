#include<bits/stdc++.h>
using namespace std;
main() {
    int t;
    cin>>t;
    while(t--) {
        int n, s=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> L(n,1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[i] >= a[j] && L[i]<=L[j]) L[i]=L[i] +1;
            }
            s=max(s,L[i]);
        }
        cout<<n-s<<endl;
    }
}