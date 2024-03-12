#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

main(){
    int t,n;
    cin>>t;
    while(t>0){
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int maxCount = 1; // Số lần xuất hiện của số lớn nhất

        // Tính số lần xuất hiện của số lớn nhất
        for (int i = n - 2; i >= 0; --i) {
            if (arr[i] == arr[i + 1]) {
                maxCount++;
            }
        }

        if(maxCount > n/2)
            cout << maxCount << endl;
        else
            cout<<"No"<< endl;

        t--;
    }
}