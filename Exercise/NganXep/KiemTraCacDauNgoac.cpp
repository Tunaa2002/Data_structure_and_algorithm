#include <bits/stdc++.h>
using namespace std;

bool isValid(const string& exp){
    stack<char> s;
    for(char ch : exp){
        if(ch == '(' || ch == '[' || ch == '{'){
            s.push(ch);
        }
        else {
            if(s.empty()) return false;
            char top = s.top();
            s.pop();
            if((ch==')' && top!= '(') || (ch==']' && top!= '[') || ch=='}' && top!= '{')  return false;
        }
    }
    return s.empty();
}
main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string exp;
        getline(cin,exp);
        if(isValid(exp)) cout<<"true"<<endl;
        else cout<<"false"<<endl;
    }
}