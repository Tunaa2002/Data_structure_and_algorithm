#include <bits/stdc++.h>
using namespace std;

string s;
char A[15];
bool B[15]; 

void in() {
    for (int i = 0; i < s.size(); i++) cout << A[i];
    cout << " ";
}

void quaylui(int i) {
    for(int j=0;j<s.size();j++){
        if(!B[j]){
            B[j]=true;
            A[i] = s[j];
            if(i==s.size()-1) in();
            else quaylui(i+1);
            B[j] = false;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> s;
        int n = s.size();
        quaylui(0);
        cout << endl;
    }
}
