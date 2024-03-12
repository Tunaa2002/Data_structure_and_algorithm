#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    cout << "\nDãy số được sắp xếp: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << setw(3);
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertionSort(arr.data(), n);
    printArray(arr.data(), n);

    return 0;
}
