#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void SelectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << setw(5);
    cout << endl;
}

int main()
{
    int n;
    cout << "Nhập số lượng phần tử của mảng: ";
    cin >> n;
    vector<int> arr(n); 

    cout << "Nhập các phần tử của mảng:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    SelectionSort(arr.data(), n);

    cout << "Dãy số được sắp xếp: \n";
    printArray(arr.data(), n);

    return 0;
}
