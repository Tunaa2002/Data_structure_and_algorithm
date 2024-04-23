#include <iostream>
using namespace std;
int n;
int a[n];

int maxCorssingSum(int l, int m, int r){
    int sum=0, left_sum= INT_MIN , right_sum= INT_MIN;
    for(int i=m;i>=l;i--){
        sum+=a[i];
        if(sum>left_sum) left_sum = sum;
    }
    sum=0;
    for(int i=m+1;i<=r;i++){
        sum+=a[i];
        if(sum>right_sum) right_sum = sum;
    }
}

int maxSubArraySum(int l, int m, int r){

}



main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
}