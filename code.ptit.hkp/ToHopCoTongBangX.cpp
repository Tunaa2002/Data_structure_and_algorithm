#include<bits/stdc++.h>
using namespace std;

int n,x;
vector<int> A;
vector<vector<int>> res;

void quaylui(int i, int sum, vector<int> &tmp){
    if(sum == x){
        res.push_back(tmp);
        return;
    }
    for(int j=i;j<n;j++){
        if(sum+A[j]<=x){
            tmp.push_back(A[j]);
            quaylui(j,sum+A[j],tmp);
            tmp.pop_back();
        }
    }
}

main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>x;
        A.resize(n);
        for(int i=0;i<n;i++) cin>>A[i];
        sort(A.begin(), A.end());
        A.erase(unique(A.begin(), A.end()), A.end());
        n=A.size();
        res.clear();
        vector<int> tmp;
        quaylui(0,0,tmp);
        if(res.empty()) cout<<-1<<endl;
        else{
            for(auto v : res){
                cout<<"[";
                for(int i=0;i<v.size();i++){
                    cout<<v[i];
                    if(i!=v.size()-1) cout<<" ";
                } 
                cout<<"] ";
            }
        }
        cout<<endl;
    }
}