#include <bits/stdc++.h>
using namespace std;

int C[45],n,k,cnt=0;
int checkFibo(long long n){
    if(n==0 || n==1) return 1;
    long long fn1 = 1, fn2 = 0, fn;
    for(int i=2;i<=92;i++){ 
        fn = fn1 + fn2;
        if(fn==n) return 1;
        fn2 = fn1;
        fn1 = fn;
    }
    return 0;
}
void in(){
    cnt++;
    if(checkFibo(cnt)){
        cout<<cnt<<": ";
        for(int i=1;i<=k;i++) cout<<C[i]<<" ";
        cout<<endl;
    }
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
    C[0]=0;
    quaylui(1);
}