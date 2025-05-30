#include<bits/stdc++.h>
using namespace std;

main(){
    int n,k, a[101];
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    vector<pair<int,vector<int>>> res;
    for(int i=1;i<(1 << n);i++){
        int sum =0;
        vector<int> idx;
        for(int j=0;j<n;j++){
            if(i>>j & 1) sum+= a[i], idx.push_back(i+1);
        }
        if(sum<k) res.push_back({sum,idx});
    }
    if(res.empty()) cout<<-1;
    else{
        sort(res.begin(), res.end());
        for(auto p : res){
            int s = p.first;
            vector<int> v = p.second;
            for(int j : v) cout<<j<<' ';
            cout<<"\nSum = "<<s<<endl;
        }
    }
}