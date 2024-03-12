#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        // Sắp xếp mảng theo thứ tự giảm
        sort(arr.begin(), arr.end(), compare);

        // In ra mảng đã sắp xếp theo yêu cầu
        int left = 0, right = n - 1;
        while (left <= right) {
            if (left != right) {
                cout << arr[left] << " " << arr[right] << " ";
            } else {
                cout << arr[left];
            }
            left++;
            right--;
        }
        cout << endl;
    }
    return 0;
}
