#include<bits/stdc++.h>
using namespace std;
main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<vector<int>> L(n+1, vector<int>(n+1, 0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if (s[i-1] == s[j-1] && i != j)
                    L[i][j] = 1 + L[i-1][j-1];
                else
                    L[i][j] = max(L[i-1][j], L[i][j-1]);
            }
        }
        cout<< L[n][n]<<endl;
    }
}