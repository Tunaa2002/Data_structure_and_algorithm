#include<bits/stdc++.h>
using namespace std;

int n, k, A[100], X[100], sum=0;
vector<vector<int>> res;

void in(int len){
    vector<int> temp;
    for(int i =1;i<=len;i++){
        temp.push_back(X[i]);
    }
    res.push_back(temp);
}

void quaylui(int i, int pos){
    for(int j=pos;j<=n;j++){
        X[i] = A[j];
        sum += A[j];
        if(sum == k) in(i);
        else quaylui(i+1, j+1);
        sum-=A[j];
    }
}

main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>A[i];
        sort(A + 1, A + n + 1);
        res.clear();
        sum=0;
        quaylui(1,1);
        if(res.empty()) cout<<-1;
        else{
            for(auto v : res){
                cout << "[";
                for(int i = 0; i < v.size(); i++){
                    cout << v[i];
                    if(i < v.size() - 1) cout << " ";
                }
                cout << "] ";
            }
        }
        cout<<endl;
    }
}