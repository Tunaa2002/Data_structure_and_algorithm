#include<bits/stdc++.h>
using namespace std;

main() {
    int t;
    cin>>t;
    while(t--){
        int n,v;
        cin>>n>>v;
        vector<int> a(n);
        vector<int> c(n);
        vector<vector<int>> L(n,vector<int>(v+1,0));
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>c[i];
        for(int i=0;i<n;i++){
            for(int j=1;j<=v;j++){
                if (i > 0)
				{
					if (a[i] <= j)
						L[i][j] = max(L[i - 1][j], L[i - 1][j - a[i]] + c[i]);
					else
						L[i][j] = L[i - 1][j];
				}
				else if (a[i] <= j)
					L[i][j] = c[i];
            }
        }
        cout << L[n - 1][v] << endl;
    }
}