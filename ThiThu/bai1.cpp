#include<bits/stdc++.h>
using namespace std;

int A[15], B[15] = {0}, n, x=1;
set<int> fibSet;

void fibonacci(){
    int a=1,b=2;
    fibSet.insert(a);
    fibSet.insert(b);
    while(b<=400000){
        int c = a+b;
        fibSet.insert(c);
        a=b;
        b=c;
    }
}

void in(){
    if(fibSet.count(x)){
        cout<<x<<": ";
        for(int i=1;i<=n;i++) cout<<A[i]<<" ";
        cout<<endl;
    }
    x++;
}

void quaylui(int i){
    for(int j=1;j<=n;j++){
        if(B[j]==0){
            A[i]=j;
            B[j]=1;
            if(i==n) in();
            else quaylui(i+1);
            B[j]=0;
        }
    }
}

main(){
    cin>>n;
    fibonacci();
    quaylui(1);
}