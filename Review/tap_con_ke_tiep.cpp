#include<bits/stdc++.h>
using namespace std;

main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[k];
        for(int i=1;i<=k;i++)
            cin>>a[i];
        a[0]=-1;
        for(int i=k;i>=0;i--){
            if(a[i]!=n-k+i){
                a[i]++;
                for(int j=i+1;j<=k;j++){
                    a[j]=a[j-1]+1;
                }
                break;
            }
        }
        for(int i=1;i<=k;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}