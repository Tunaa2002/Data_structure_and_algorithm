#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ok = 0, a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = n - 1; i >= 1; i--)
        {
            if (a[i] < a[i + 1])
            {
                ok = 1;
                sort(a + i, a + n+1);
                swap(a[i], a[i + 1]);
                break;
            }
        }
        if (ok == 0)
        {
            for (int i = 1; i <= n; i++)
                a[i] = i;
        }
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}


/*
1 2 3 4 5 
1 2 3 5 4 
1 2 4 3 5 
1 2 4 5 3 
1 2 5 3 4 
1 2 5 4 3 
1 3 2 4 5 
1 3 2 5 4 
1 3 4 2 5 
1 3 4 5 2 
1 3 5 2 4 
1 3 5 4 2 
1 4 2 3 5 
1 4 2 5 3 
1 4 3 2 5 
1 4 3 5 2 
1 4 5 2 3 
1 4 5 3 2 
1 5 2 3 4 
1 5 2 4 3 
1 5 3 2 4 
1 5 3 4 2 
1 5 4 2 3 
1 5 4 3 2 
2 1 3 4 5 
2 1 3 5 4 
2 1 4 3 5 
2 1 4 5 3 
2 1 5 3 4 
2 1 5 4 3 
2 3 1 4 5 
2 3 1 5 4 
2 3 4 1 5 
2 3 4 5 1 
2 3 5 1 4 
2 3 5 4 1 
2 4 1 3 5 
2 4 1 5 3 
2 4 3 1 5 
2 4 3 5 1 
2 4 5 1 3 
2 4 5 3 1 
2 5 1 3 4 
2 5 1 4 3 
2 5 3 1 4 
2 5 3 4 1 
2 5 4 1 3 
2 5 4 3 1 
3 1 2 4 5 
3 1 2 5 4 
3 1 4 2 5 
3 1 4 5 2 
3 1 5 2 4 
3 1 5 4 2 
3 2 1 4 5 
3 2 1 5 4 
3 2 4 1 5 
3 2 4 5 1 
3 2 5 1 4 
3 2 5 4 1 
3 4 1 2 5 
3 4 1 5 2 
3 4 2 1 5 
3 4 2 5 1 
3 4 5 1 2 
3 4 5 2 1 
3 5 1 2 4 
3 5 1 4 2 
3 5 2 1 4 
3 5 2 4 1 
3 5 4 1 2 
3 5 4 2 1 
4 1 2 3 5 
4 1 2 5 3 
4 1 3 2 5 
4 1 3 5 2 
4 1 5 2 3 
4 1 5 3 2 
4 2 1 3 5 
4 2 1 5 3 
4 2 3 1 5 
4 2 3 5 1 
4 2 5 1 3 
4 2 5 3 1 
4 3 1 2 5 
4 3 1 5 2 
4 3 2 1 5 
4 3 2 5 1 
4 3 5 1 2 
4 3 5 2 1 
4 5 1 2 3 
4 5 1 3 2 
4 5 2 1 3 
4 5 2 3 1 
4 5 3 1 2 
4 5 3 2 1 
5 1 2 3 4 
5 1 2 4 3 
5 1 3 2 4 
5 1 3 4 2 
5 1 4 2 3 
5 1 4 3 2 
5 2 1 3 4 
5 2 1 4 3 
5 2 3 1 4 
5 2 3 4 1 
5 2 4 1 3 
5 2 4 3 1 
5 3 1 2 4 
5 3 1 4 2 
5 3 2 1 4 
5 3 2 4 1 
5 3 4 1 2 
5 3 4 2 1 
5 4 1 2 3 
5 4 1 3 2 
5 4 2 1 3 
5 4 2 3 1 
5 4 3 1 2 
5 4 3 2 1
*/