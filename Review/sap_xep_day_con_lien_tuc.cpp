#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],b[n+1],s=0,l,r,max=0,min=1e9;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]>s){
                s=a[i];
            }
            b[i]=s;
        }
        for(int i=1;i<=n;i++){
            if(a[i]>a[i+1]){
                l=i;
                break;
            }
        }
        for(int i=n;i>=2;i--){
            if(a[i]<a[i-1]){
                r=i;
                break;
            }
        }
        for(int i=l;i<=r;i++){
            if(a[i]<min){
                min=a[i];
            }
            if(a[i]>max){
                max=a[i];
            }
        }
        for(int i=1;i<=n;i++){
            if(a[i]>min){
                cout<<i<<" ";
                break;
            }
        }
        for(int i=n;i>=1;i--){
            if(a[i]<=max){
                cout<<i<<endl;
                break;
            }
        }
        
    }
}