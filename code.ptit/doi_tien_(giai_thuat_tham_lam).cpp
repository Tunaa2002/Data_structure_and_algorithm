#include <iostream>
using namespace std;

main(){
    int t;
    cin>>t;
    int a[]= {1,2,5,10,20,50,100,200,500,1000};
    while(t>0){
        int size = sizeof(a)/sizeof(int);
        int n,tong=0;
        cin>>n;
        for(int i= size-1;i>=0;i--){
            tong+=n/a[i];
            n%=a[i];
            if(n==0) break;
        }
        cout<<tong<<endl;
        t--;
    }
    
}