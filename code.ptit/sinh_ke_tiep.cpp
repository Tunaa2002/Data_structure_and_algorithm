#include <iostream>
#include <vector>

using namespace std;

int n, a[100];
bool ok = true;

void init(){
    cin>>n;
    for(int i=1;i<=n;i++){
        a[i] = 0;
    }
}

void Result(){
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void Next_bits_String(){
    int i=n;
    while(i>0 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i>0) a[i]=1;
    else ok = false;
}

bool Check() {
    int left = 1, right = n;
    while (left < right) {
        if (a[left] != a[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    init();
    while(ok){
        if(Check())
            Result();
        Next_bits_String();
    }

    return 0;
}
