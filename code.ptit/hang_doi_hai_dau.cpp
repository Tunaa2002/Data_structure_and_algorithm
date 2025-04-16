#include<bits/stdc++.h>
using namespace std;

main() {
    int n,x;
    string s;
    deque<int> dq;
    cin>>n;
    while(n--){
        while(cin>>s){
            if(s=="PUSHFRONT"){
                cin>>x;
                dq.push_front(x);
            }
            else if(s=="PUSHBACK"){
                cin>>x;
                dq.push_back(x);
            }
            else if(s=="POPFRONT" && dq.size()){
                dq.pop_front();
            }
            else if(s=="POPBACK" && dq.size()){
                dq.pop_back();
            }
            else if(s=="PRINTFRONT"){
                if(dq.size()){
                    cout<<dq.front()<<endl;
                }
                else
                    cout<<"NONE"<<endl;
            }
            else if(s=="PRINTBACK"){
                if(dq.size())
                    cout<<dq.back()<<endl;
                else
                    cout<<"NONE"<<endl;
            }
        }
    }
}