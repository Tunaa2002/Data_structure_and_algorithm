#include <iostream>
using namespace std;

main(){
    int t,a,b,c;
    char plus, equal;
    cin>> t;
    while(t>0){
        cin>>a>>plus>>b>>equal>>c;
        if (plus == '+' && equal == '=' && a + b == c) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
        t--;
    }
}