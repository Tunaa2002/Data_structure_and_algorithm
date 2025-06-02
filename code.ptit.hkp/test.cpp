#include<bits/stdc++.h>
using namespace std;

int n,k;
int X[100];
vector<string> vs;

void in(){
    for(int i=1;i<=k;i++) cout<<vs[X[i]-1]<<" ";
    cout<<endl;
}

void quaylui(int i){
    for(int j=X[i-1]+1;j<=vs.size()-k+i;j++){
        X[i]=j;
        if(i == k) in();
        else quaylui(i+1);
    }
}

main(){
    cin>>n>>k;
    string s;
    map<string,bool> m;
    for(int i=0;i<n;i++){
        cin>>s;
        m[s] = 1;
    }
    for(auto &i : m) vs.push_back(i.first);
    quaylui(1);
}
