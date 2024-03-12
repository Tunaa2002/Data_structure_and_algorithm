#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin>>n;
    map<int,int> newMap;
    string input;
    cin.ignore();
    getline(cin,input);
    for(int i=0;i<input.size();i++) {
        if(input[i] ==' ') continue;
        newMap[int(input[i])-'0'] = 0;
    }
    for(auto i: newMap){
        cout<<i.first<<" ";
    }
    cout<<endl;
}


int main() {
    int t;
    cin>>t;
    while(t>0){
        solve();
        t--;
    }
}