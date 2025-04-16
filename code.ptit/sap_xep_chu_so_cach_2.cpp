#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

bool exists(vector<int>& vec, int value){
    return find(vec.begin(),vec.end(), value) !=vec.end();
}

main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int a[1000];
        vector<int> b;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=n;i++){
            int res = a[i];
            while (res > 0) {
                int digit = res % 10;
                if (!exists(b, digit)) {
                    b.push_back(digit);
                }
                res /= 10;
            }
        }
        sort(b.begin(),b.end());
        for(int num:b)
            cout<< num <<" ";
        cout<<endl;
        t--;
    }
}