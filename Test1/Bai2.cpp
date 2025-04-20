#include <bits/stdc++.h>
using namespace std;
int C[45],n,k,cnt=0;
set<int> fiboPos;
void initFibo(){
    int a=1,b=1;
    fiboPos.insert(a);
    fiboPos.insert(b);
    while(true){
        int c = a+b;
        if(c>999999) break;
        fiboPos.insert(c);
        a=b;
        b=c;
    }
}
void in(){
    cnt++;
    if(fiboPos.count(cnt)){
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
    initFibo();
    C[0]=0;
    quaylui(1);
}