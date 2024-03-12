#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void swap(int *x, int *y)
{ 
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n)
{ 
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

void printArray(int arr[], int size)
{
    cout << "\n Dãy được sắp:";
    for (int i = 0; i < size; i++)
        cout << arr[i] << setw(3);
}

int main()
{
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    bubbleSort(arr.data(), n);
    printArray(arr.data(), n);
    
    return 0;
}
