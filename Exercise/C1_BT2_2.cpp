#include <iostream>

using namespace std;

main(){
    int t,n;
    cin>>t;
    while(t>0){
        cin>>n;
        int k;
        int a=n%10;
        while(n>0){
            k=n%10;
            n=n/10;
        }
        if(a==k){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        t--;
    }
}