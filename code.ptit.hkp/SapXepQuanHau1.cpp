#include<bits/stdc++.h>
using namespace std;

int n, X[100], cot[100], d1[100], d2[100], cnt=0;

void quaylui(int i){
    for(int j=1;j<=n;j++){
        if(cot[j]==1 && d1[i-j+n] ==1 && d2[i+j-1] ==1){
            X[i] =j;
            cot[j] = d1[i-j+n] = d2[i+j-1] = 0;
            if(i==n) cnt++;
            else quaylui(i+1);
            cot[j] = d1[i-j+n] = d2[i+j-1] = 1;
        }
    }
}

main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        cnt=0;
        for(int i=1;i<=n*2;i++){
            d1[i] =d2[i]=1;
        }
        for(int i=1;i<=n;i++){
            cot[i]=1;
        }
        quaylui(1);
        cout<<cnt<<endl;
        
    }
}