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
        long long n, k;
        cin >> n >> k;
        long long a[n + 1];
        for (long long i = 1; i <= n; i++)
        {
            a[i] = pow(2, i - 1);
        }
        for (int i = n; i >= 1; i--)
        {
            if (k == a[i])
            {
                cout << i << endl;
                break;
            }
            else if (k > a[i])
                k -= a[i];
        }
    }
}