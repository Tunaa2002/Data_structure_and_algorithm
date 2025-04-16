#include <bits/stdc++.h>
using namespace std;

main() {
    int t;
    cin>>t;
    while(t>0){
        string s;
        int x;
        stack<int> st;
        while(cin>>s){
            if(s=="PUSH"){
                cin>>x;
                st.push(x);
            }
            else if(s=="POP" && st.size())
                st.pop();
            else if(s=="PRINT"){
                if(st.size()){
                    cout<<st.top()<<endl;
                }
                else   
                    cout<<"NONE"<<endl;
            }
        }
        t--;
    }
}