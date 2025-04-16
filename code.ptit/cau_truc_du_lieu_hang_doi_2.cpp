#include<bits/stdc++.h>
using namespace std;

main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int x;
        queue<int> q;
        while(cin>>s){
            if(s=="PUSH"){
                cin>>x;
                q.push(x);
            }
            else if(s=="POP" && q.size()){
                q.pop();
            }
            else if(s=="PRINTFRONT"){
                if(q.size())
                    cout<<q.front()<<endl;
                else   
                    cout<<"NONE"<<endl;
            }
        }
    }
}