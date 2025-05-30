#include<bits/stdc++.h>
using namespace std;

int countOnes(int num){
    int cnt=0;
    while(num>0){
        cnt+= num & 1;
        num>>=1;
    }
    return cnt;
}

main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int cnt=0;
        for(int i=0;i<=n;i++){
            int ones = countOnes(i);
            int zeros = 31-ones;
            if(zeros==k) cnt++;
        }
        cout<<cnt<<endl;
    }
}