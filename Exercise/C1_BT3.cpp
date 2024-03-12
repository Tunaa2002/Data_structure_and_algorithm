#include <iostream>

using namespace std;

bool check_doi_xung(int n, int arr[100]) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t > 0) {
        int n;
        cin >> n;
        int arr[100];

        for (int i = 0; i < n; i++) { 
            cin >> arr[i];
        }

        if (check_doi_xung(n, arr)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

        t--;
    }

    return 0;
}
