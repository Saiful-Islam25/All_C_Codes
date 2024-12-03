#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n, q;
    cin>>n>>q;    
    vector<int> v(n);
    for (int p = 0; p < n; p++)
    {
        cin>>v[p];
    }
    sort(v.begin(), v.end());
    vector<int> f(n + 1, 0);
    for (int p = 1; p <= n; p++)
    {
        f[p] = f[p - 1] + v[p - 1];
    }
    while (q--)
    {
        int x, y;
        cin>>x>>y;
        int res = f[n - x + y] - f[n - x];
        cout<<res<<endl;
    }
}