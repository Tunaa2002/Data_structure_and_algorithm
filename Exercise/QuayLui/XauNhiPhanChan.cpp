#include <bits/stdc++.h>
using namespace std;
int B[25], n;

void in(){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(B[i] == 1) cnt++;
    }
    if(cnt %2 == 0){
        for(int i=1;i<=n;i++) cout<<B[i]<<" ";
        cout<<endl;
    }
}

void quaylui(int i){
    for(int j=0;j<=1;j++){
        B[i] = j;
        if(i==n) in();
        else quaylui(i+1);
    }
}

main(){
    cin>>n;
    quaylui(1);
}