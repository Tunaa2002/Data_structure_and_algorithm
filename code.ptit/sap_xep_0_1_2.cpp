#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, a[3] = {};
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a[x]++;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < a[i]; j++)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}