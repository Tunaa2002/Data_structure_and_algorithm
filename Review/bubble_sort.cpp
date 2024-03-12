#include <bits/stdc++.h>
#include <vector>

using namespace std;

void bubbleSort(int a[], int n){
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped = true;
            }
        }
        if(swapped){
            cout<<"Buoc "<<(i+1)<<": ";
            for(int k=0;k<n;k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
        else{
            break;
        }
    }
}

main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
        cin>>a[i];
        
    bubbleSort(a,n);
}