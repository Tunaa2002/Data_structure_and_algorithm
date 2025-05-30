#include<bits/stdc++.h>
using namespace std;

main(){
    int n;
    string s;
    stack<int> st;
    while(cin>>s){
        if(s=="push"){
            cin>> n;
            st.push(n);
        } else if(s == "pop"){
            st.pop();
        } else if(s== "show"){
            if(!st.empty()){
                stack<int> temp;
                while(st.size()){
                    temp.push(st.top());
                    st.pop();
                }
                while(!temp.empty()){
                    cout<<temp.top()<<" ";
                    st.push(temp.top());
                    temp.pop();
                }
            } else {
                cout<<"empty";
            }
            cout<<endl;
        }
    }
}