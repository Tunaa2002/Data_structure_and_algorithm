#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, k, a[15], b[15];
bool check()
{
    for (int i = 1; i <= k; i++)
        if (a[i] != b[i])
            return 0;
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int p = 0;
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            a[i] = i;
            cin >> b[i];
        }
        while (++p)
        {
            if (check())
            {
                cout << p << endl;
                break;
            }
            for (int i = k; i >= 1; i--)
            {
                if (a[i] != n - k + i)
                {
                    a[i]++;
                    for (int j = i + 1; j <= k; j++)
                        a[j] = a[j - 1] + 1;
                    break;
                }
            }
        }
    }
}