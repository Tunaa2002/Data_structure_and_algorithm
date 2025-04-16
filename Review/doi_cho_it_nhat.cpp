#include<bits/stdc++.h>
using namespace std;

main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int sswap=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n-1;i++){
            int min_index = i;
            for(int j=i+1;j<n;j++){
                if(a[j]<a[min_index]){
                    min_index = j;
                }
            }
            if(a[i]>a[min_index]){
                swap(a[i],a[min_index]);
                sswap++;
            }
        }
        cout<<sswap<<endl;
    }
}