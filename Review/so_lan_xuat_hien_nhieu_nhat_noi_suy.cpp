#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int InterPolationSearch(int arr[], int n, int x)
{
  int left = 0;
  int right = n-1;
  while (left <= right && x >= arr[left] && x <= arr[right])
  {
    double val1 = (double) (x - arr[left]) / (arr[right]-arr[left]);
    int val2 = (right-left);
    int Search = left + val1*val2;
  
    if (arr[Search] == x)
      return Search;
  
    if (arr[Search] < x)
      left = Search + 1;
    else
      right = Search - 1;
  }
  return -1;
}


int main() {
    int t, n;
    cin >> t;
    while (t > 0) {
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        
        int target = arr[n - 1]; // Phần tử lớn nhất sau khi đã sắp xếp
        int maxCount = 1; // Số lần xuất hiện của số lớn nhất

        // Tìm vị trí của phần tử lớn nhất
        int pos = InterPolationSearch(&arr[0], n, target);

        // Tìm số lần xuất hiện của phần tử lớn nhất
        for (int i = pos - 1; i >= 0; --i) {
            if (arr[i] == target) {
                maxCount++;
            } else {
                break;
            }
        }

        if (maxCount > n / 2)
            cout << maxCount << endl;
        else
            cout << "No" << endl;

        t--;
    }
    return 0;
}
