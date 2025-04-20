#include <bits/stdc++.h>
using namespace std;

void nganXep(const string& expr){
    stack<int> s;
    int cnt = 1;
    for(char ch : expr){
        if(ch == '('){
            s.push(cnt);
            cout<<cnt<<" ";
            cnt++;
        }
        else if(ch == ')'){
            if(!s.empty()){
                cout<< s.top()<<" ";
                s.pop();
            }
        }
    }
    cout<<endl;
}

main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string expr;
        getline(cin, expr);
        nganXep(expr);
    }
}