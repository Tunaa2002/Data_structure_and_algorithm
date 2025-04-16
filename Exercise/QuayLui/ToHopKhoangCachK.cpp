#include <bits/stdc++.h>
using namespace std;
int C[45],n,k, x=0;

void in(){
    if(x%k ==0){
        for(int i=1;i<=k;i++) cout<<C[i]<<" ";
        cout<<endl;
    }
    x++;
}

void quaylui(int i){
    for(int j=C[i-1]+1;j<=n-k+i;j++){
        C[i] = j;
        if(i==k) in();
        else quaylui(i+1);
    }
}

main() {
    cin>>n>>k;
    quaylui(1);
}