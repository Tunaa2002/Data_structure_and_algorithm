#include<bits/stdc++.h>
using namespace std;

vector<int> parent; 

int find(int x){
    if(parent[x] != x)
        parent[x] = find(parent[x]);
    return parent[x];
}

void unite(int a, int b) {
    int rootA = find(a);
    int rootB = find(b);
    if(rootA != rootB)
        parent[rootB] = rootA;
}

main(){
    int n,m;
    cin>>n>>m;
    parent.resize(n+1);
    for(int i=1;i<=n;i++)
        parent[i]=i;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        unite(u,v);
    }
    int cnt =0;
    for(int i=1;i<=n;i++){
        if(find(i)==i)
            cnt++;
    }
    cout<<cnt<<endl;
}