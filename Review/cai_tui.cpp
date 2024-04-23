#include <bits/stdc++.h>
using namespace std;
int n, v, a[1000], c[1000];

void Init(){
    cin>>n>>v;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>c[i];
}

void Dynamic() {
    int dp[n+1][v+1]={};
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= v; j++) {
            dp[i][j] = dp[i - 1][j];
            if (a[i - 1] <= j) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i-1]] + c[i-1]);
            }
        }
    }
    cout << dp[n][v];
}


int main(){
    Init();
    Dynamic();
    return 0;
}