#include <iostream>

using namespace std;

bool check(int n){
    if(n<=0){
        return false;
    }

    // chuyển sang dạng chuỗi
    string numberString = to_string(n);

    if(numberString.length() < 2) {
        return false;
    }

    return (numberString[0] == numberString[numberString.length()-1]);

}

main (){
    int t,n;
    cin>>t;
    while (t>0)
    {
        cin>> n;

        if(check(n)){
            cout<< "YES\n";
        }
        else {
            cout<< "NO\n";
        }
        
        t--;
    }
    
}