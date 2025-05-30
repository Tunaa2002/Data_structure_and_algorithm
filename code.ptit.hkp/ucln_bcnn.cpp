#include<bits/stdc++.h>
using namespace std;

long ucln(long a, long b){
    if(b==0) return a;
    return ucln(b,a%b);
}

long bcnn(long a, long b){
    return a*b/ucln(a,b);
}

main(){
    int a,b;
    cin>>a>>b;
    cout<<ucln(a,b)<<" ";
    cout<<bcnn(a,b);
}