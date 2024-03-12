#include <iostream>

using namespace std;

int USCLN(int a, int b){
    if(b == 0) return a;
    return USCLN(b, a%b);
}

int BSCNN(int a, int b){
    return (a * b) / USCLN(a,b); 
}

main(){
    int t,a,b;
    cin>> t;
    while (t>0)
    {
        cin>>a>>b;
        cout<< USCLN(a,b) <<" "<< BSCNN(a,b) << endl;
        t--;
    }
}