#include<bits/stdc++.h>
using namespace std;
int A[15],B[15]={0},n;
void in(){
    for(int i=1;i<=n;i++) cout << A[i] << " ";
    cout << endl;
}
void quaylui(int i){
    for(int j=1;j<=n;j++){
        if(B[j]==0){
            A[i] = j; B[j] = 1;
            if(i==n) in();
            else quaylui(i+1);
            B[j] = 0;
        }
    }
}
main(){
    cin >> n;
    quaylui(1);
}
