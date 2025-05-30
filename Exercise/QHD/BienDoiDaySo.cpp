#include<bits/stdc++.h>
using namespace std;
using ll = long long;

main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i]>>b[i];
        ll dp[3] = {0,b[0],2*b[0]};
        for(int i=1;i<n;i++){
            ll ndp[3] = {LLONG_MAX, LLONG_MAX, LLONG_MAX};
            for(int j=0;j<=2;j++){
                for(int k=0;k<=2;k++){
                    if(a[i-1]+j!=a[i]+k)
                        ndp[k]=min(ndp[k],dp[j]+k*b[i]);
                }
            }
            copy(begin(ndp),end(ndp),begin(dp));
        }
        cout<< *min_element(begin(dp),end(dp))<<endl;
    }
}