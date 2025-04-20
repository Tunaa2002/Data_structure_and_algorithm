#include<bits/stdc++.h>
using namespace std;
void nganXep(const string& expr){
    string res = expr;
    stack<int> s;
    for(int i=0;i<expr.size();i++){
        if(expr[i] == '('){
            s.push(i);
        }
        else if(expr[i] == ')'){
            if(!s.empty()){
                int idx = s.top(); s.pop();
                res[idx] = '0';
                res[i] = '1';
            } else {
                res[i]='*';
            }
        }
    }
    while(!s.empty()){
        res[s.top()] = '*';
        s.pop();
    }
    for(char ch : res){
        if(ch == '*') cout<<"-1";
        else cout<<ch;
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