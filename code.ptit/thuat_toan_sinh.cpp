#include <iostream>

using namespace std;

bool kt_thuan_nghich(const string& thuan_nghich) {
    return thuan_nghich == string(thuan_nghich.rbegin(), thuan_nghich.rend());
}

void sinh_nhi_phan(int n, string nhi_phan = "") {
    if (n == 0) {
        if (kt_thuan_nghich(nhi_phan)) {
            for (int i = 0; i < nhi_phan.size(); i++) {
                cout << nhi_phan[i] << " ";
            }
            cout << endl;
        }
        return;
    }

    sinh_nhi_phan(n - 1, nhi_phan + "0");
    sinh_nhi_phan(n - 1, nhi_phan + "1");
}

int main() {
    int n;
    cin >> n;
    sinh_nhi_phan(n);
}
