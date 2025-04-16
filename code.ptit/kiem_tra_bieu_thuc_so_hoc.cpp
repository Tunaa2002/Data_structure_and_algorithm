#include<bits/stdc++.h>
using namespace std;

main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        int ok=0;
        getline(cin,s);
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
                st.push(s[i]);
            if (s[i] == ')')
            {
                if (st.top() == '(')
                {
                    ok = 1;
                    break;
                }
                while (st.size() && st.top() != '(')
                    st.pop();
                st.pop();
            }
        }
        if (ok)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}