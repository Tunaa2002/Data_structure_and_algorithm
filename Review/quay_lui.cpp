#include <iostream>
using namespace std;

int n,k;
int X[100];

void Init(){
    cin>>n>>k;
}

void Result(){
    for(int i=1;i<=k;i++){
        cout<<X[i]<<" ";
    }
    cout<<endl;
}

void Back_track(int i){
    for(int j=X[i-1]+1;j<=n-k+i;j++){
        X[i]=j;
        if(i==k){
            Result();
        }
        else{
            Back_track(i+1);
        }
    }
}

main(){
    Init();
    Back_track(1);
}