#include<bits/stdc++.h>
using namespace std;

main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s, x="";
        getline(cin,s);
        stack<string> st;
        s += ' ';
        for(int i=0;i<s.size();i++){
            if(s[i] == ' '){
                if(x != ""){
                    st.push(x);
                    x="";
                }
            }
            else
                x += s[i];
        }
        while(st.size()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
}