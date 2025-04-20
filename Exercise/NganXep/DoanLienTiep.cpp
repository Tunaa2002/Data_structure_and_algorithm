#include <bits/stdc++.h>
using namespace std;

main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int &x : a) cin>>x;

        vector<int> res(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && a[st.top()] <= a[i]){
                st.pop();
            }
            if(st.empty())
                res[i] = i+1;
            else
                res[i] = i- st.top();
            
            st.push(i);
        }
        for(int x : res) cout<<x<<" ";
        cout<<endl;
    }
}