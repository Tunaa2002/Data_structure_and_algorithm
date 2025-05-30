#include <bits/stdc++.h>
using namespace std;
int B[25], n,k, x=0;

void in(){
    if(x%k ==0){
        for(int i=1;i<=n;i++) cout<<B[i];
        cout<<endl;
    }
    x++;
}

void quaylui(int i){
    for(int j=0;j<=1;j++){
        B[i] = j;
        if(i==n) in();
        else quaylui(i+1);
    }
}

main(){
    cin>>n>>k;
    quaylui(1);
}