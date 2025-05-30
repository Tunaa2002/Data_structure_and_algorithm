#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    stack<char> st;
    for(char c : s){
        if(c == '(' || c=='[') st.push(c);
        else if(c==')'){
            if(st.empty() || st.top() != '(') return false;
            st.pop();
        }
        else if(c==']'){
            if(st.empty() || st.top() != '[') return false;
            st.pop();
        }
    }
    return st.empty();
}

main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        cout<<(check(s) ? "YES" : "NO");
        cout<<endl;
    }
} 