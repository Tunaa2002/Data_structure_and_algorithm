#include <bits/stdc++.h>

using namespace std;

bool bs(int n, int a[], int x){
    int l=0, r=n-1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m]==x){
            return true;
        }
        else if(a[m]<x){
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return false;
}

main(){
    int t,n,x;
    cin>>t;
    int a[100];
    while(t>0){
        cin>>n>>x;
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        if(bs(n,a,x)){
            cout<<"1";
        }
        else{
            cout<<"-1";
        }
        cout<<endl;
        t--;
    }    
}