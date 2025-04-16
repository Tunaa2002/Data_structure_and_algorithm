#include <bits/stdc++.h>
using namespace std;

int C[25],n,k;

void in(){
    for(int i=1;i<=k;i++) cout<<C[i]<<" ";
    cout<<endl;
}

void quaylui(int i){
    for(int j=C[i-1]+1;j<=n-k+i;j++){
        C[i]=j;
        if(i==k){
            in();
        }
        else quaylui(i+1);
    }
}

main(){
    int t;
    cin>>t;
    while(t--) {
        cin>>n>>k;
        for(int i=0;i<k;i++) cin>>C[i];
        quaylui(1);
    }
}