#include <bits/stdc++.h>
using namespace std;

int C[45],n,k,cnt=0;
set<int> primePos;

bool isPrime(int x){
    if(x<2) return false;
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0) return false;
    return true;
}

void initPrime(){
    for(int i=2;i<=999999;i++){
        if(isPrime(i)) primePos.insert(i);
    }
}

void in(){
    cnt++;
    if(primePos.count(cnt)){
        cout<<cnt<<": ";
        for(int i=1;i<=k;i++) cout<<C[i]<<" ";
        cout<<endl;
    }
}

void quaylui(int i){
    for(int j=C[i-1]+1;j<=n-k+i;j++){
        C[i]=j;
        if(i==k) in();
        else quaylui(i+1);
    }
}

main() {
    cin>>n>>k;
    initPrime();
    C[0]=0;
    quaylui(1);
}