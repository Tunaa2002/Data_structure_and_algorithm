#include <bits/stdc++.h>
#include <vector>

using namespace std;

void insertionSort(std::vector<int>& a, int n) {
    for (int i = 0; i < n; ++i) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = key;

        cout << "Buoc " << i << ": ";
        for (int k = 0; k <= i; ++k) {
            cout << a[k] << " ";
        }
        cout << std::endl;
    }
}

main(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++)
        cin>>a[i];
    insertionSort(a,n);
}