#include<bits/stdc++.h>
using namespace std;
int A[15],n;
bool B[15];
void in(){
    for(int i=1;i<=n;i++) cout << A[i] << " ";
    cout << endl;
}
void quaylui(int i){
    for(int j=1;j<=n;j++){
        if(!B[j]){
            A[i] = j; B[j] = true;
            if(i==n) in();
            else quaylui(i+1);
            B[j] = false;
        }
    }
}
main(){
    cin >> n;
    quaylui(1);
}
