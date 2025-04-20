#include<bits/stdc++.h>
using namespace std;

main() {
    int n,q;
    cin>>n>>q;
    vector<int> h(n);
    for(int &x : h) cin>>x;

    vector<int> next_higher(n,-1);
    stack<int> st;

    for(int i=n-1;i>=0;i--){
        while(!st.empty() && h[st.top()] <= h[i])
            st.pop();
        if(!st.empty()) next_higher[i] = st.top();
        st.push(i);
    }

    vector<int> steps(n,0);
    for(int i=n-1;i>=0;i--){
        if(next_higher[i] !=-1)
            steps[i]=1+steps[next_higher[i]];
    }
    while(q--){
        int x;
        cin>>x;
        cout<<steps[x-1]<<endl;
    }
}