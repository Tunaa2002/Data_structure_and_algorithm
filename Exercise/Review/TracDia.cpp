#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a, a + n);
    cout<<a[n-1]<<" "<<a[0];
}