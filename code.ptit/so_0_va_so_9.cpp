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
        int n;
        cin >> n;
        queue<long long> q;
        q.push(9);
        while (q.size())
        {
            long long k = q.front();
            q.pop();
            if (k % n == 0)
            {
                cout << k << endl;
                break;
            }
            q.push(k * 10);
            q.push(k * 10 + 9);
        }
    }
}