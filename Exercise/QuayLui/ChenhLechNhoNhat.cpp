#include <bits/stdc++.h>
using namespace std;

int n,k, minDiff = INT_MAX;
vector<string> a;
int pos[10], used[10]={0};

int applyPerm(const string &s){
    string t = "";
    for(int i=0;i<k;i++){
        t+=s[pos[i]];
    }
    return stoi(t);
}

void quaylui(int i){
    for(int j=0;j<k;j++){
        if(!used[j]){
            pos[i]=j;
            used[j]=1;
            if(i == k-1){
                vector<int> values(n);
                for(int t=0;t<n;t++)
                    values[t] = applyPerm(a[t]);
                int mx = *max_element(values.begin(),values.end());
                int mn = *min_element(values.begin(),values.end());
                minDiff = min(minDiff, mx-mn);
            } else{
                quaylui(i+1);
            }
            used[j] =0;
        }
    }
}

main() {
    cin>>n>>k;
    a.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    quaylui(0);
    cout<<minDiff<<endl;
}