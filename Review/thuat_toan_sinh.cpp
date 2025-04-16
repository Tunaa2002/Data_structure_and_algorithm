#include<bits/stdc++.h>
using namespace std;

int n,a[1000],ok;

void Init(){
    for(int i=1;i<=n;i++)
        a[i]=0;
}

void sinh(){
    int i=n;
    while(i>=1 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i == 0 ){
        ok = 0;
    }
    else {
        a[i]=1;
    }
}

bool kt_thuan_nghich(){
    for(int i=1;i<=n/2;i++){
        if(a[i]!=a[n-i+1]){
            return false;
        }
    }
    return true;
}

main(){
    cin>>n;
    ok=1;
    Init();
    while(ok){
        if(kt_thuan_nghich()){
            for(int i=1;i<=n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
        sinh();
    }

}