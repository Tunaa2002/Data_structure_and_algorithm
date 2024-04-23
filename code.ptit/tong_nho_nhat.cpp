#include <iostream>
#include <algorithm>
using namespace std;

main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        long long x1=0,x2=0;
        for(int i=0;i<n;i+=2){
            x1=x1*10+a[i];
        }
        for(int i=1;i<n;i+=2){
            x2= x2*10+a[i];
        }
        cout<<x1+x2<<endl;
        t--;
    }
}