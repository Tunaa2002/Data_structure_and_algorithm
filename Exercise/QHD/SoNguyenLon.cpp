#include<bits/stdc++.h>
using namespace std;

main() {
    int t;
    cin>>t;
    while(t--) {
        string s1,s2;
        cin>>s1>>s2;
        int n=s1.size(), m=s2.size();
        int L[n+1][m+1] = {};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if (s1[i] == s2[j])
                    L[i + 1][j + 1] = L[i][j] + 1;
                else
                    L[i + 1][j + 1] = max(L[i][j + 1], L[i + 1][j]);
            }
        }
        cout<<L[n][m]<<endl;
    }
}