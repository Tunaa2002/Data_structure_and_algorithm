#include<bits/stdc++.h>
using namespace std;

int n, A[100], cnt=0;
bool check[100];

bool checkNT(int nt){
    if(nt<2) return 0;
    for(int i=2;i<=sqrt(nt);i++){
        if(nt%i==0) return 0;
    } 
    return 1;
}

void in(){
    cnt++;
    if(checkNT(cnt)){
        cout<<cnt<<": ";
        for(int i=1;i<=n;i++) cout<<A[i]<<" ";
        cout<<endl;
    }
}

void quaylui(int i){
    for(int j=1;j<=n;j++){
        if(!check[j]){
            A[i]=j;
            check[j] = true;
            if(i == n) in();
            else quaylui(i+1);
            check[j] = false;
        }
    }
}

main(){
    cin>>n;
    quaylui(1);
}