#include <iostream>

using namespace std;

void phanTichThuaSoNguyenTo(int n) {
    for (int i = 2; i <= n; i++) {
        int dem = 0;

        while (n % i == 0) {
            n /= i;
            dem++;
        }

        if (dem > 0) {
            cout << i << "(" << dem << ") ";
        }
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;

    for (int k = 1; k <= t; k++) {
        int n;
        cin >> n;

        cout << "Test " << k << ": ";
        phanTichThuaSoNguyenTo(n);
    }

}
