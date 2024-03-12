#include <bits/stdc++.h>
#include <vector>
using namespace std;

main() {
    
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        int k = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[k])
                k=j;
        }
        swap(arr[k],arr[i]);
        cout<< "Buoc "<<i+1<<": ";
        for(int j=0;j<n;j++){
            cout<<arr[j];
        }
        cout<<endl;
    }
       
}