#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, a[1000];

void Init(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

void Dynamic(){
    vector<int> dp(n,1);
    for(int i=1;i<n;i++){
        for(int j=0; j<i;j++){
            if(a[j]<a[i]){
                dp[i]= max(dp[i],dp[j]+1);
            }
        }
    }
    int max = *max_element(dp.begin(),dp.end());
    cout<<max;
}

int main(){
    Init();
    Dynamic();
}