#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) return false;
    return true;
}

main(){
    ifstream fin("SONT.INP");
    ofstream fout("SONT.OUT");
    string s;
    int q;
    fin >> s >> q;
    if(s[q-1] == '0' || q>= s.size()) fout<<"-1";
    else if(isPrime(s[q-1])){
        fout<<s[q-1]<<" Yes";
    }
    else{
        fout<<s[q-1]<<" No";
    }
}