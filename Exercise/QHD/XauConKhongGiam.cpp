#include <bits/stdc++.h>
using namespace std;
main() {
    string s;
    cin>>s;
    int n = s.size();
    vector<int> L(n, 1);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(s[i]>=s[j]) L[i]=max(L[i],L[j]+1);
        }
    }

    cout<< *max_element(L.begin(),L.end());
}