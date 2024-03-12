#include <bits/stdc++.h>
#include <vector>

using namespace std;


main(){
    int t,n,k;
    cin>>t;
    while(t>0){
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int dem=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]+a[j]==k)
                    dem++;
            }
        }
        cout<<dem<<endl;
        t--;
    }
}