#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll x;
    cin >> x;

    if (x <= 1399)
        cout << "Division 4" << nline;
    else if (x >= 1400 && x <= 1599)
        cout << "Division 3" << nline;
    else if (x >= 1600 && x <= 1899)
        cout << "Division 2" << nline;
    else
        cout << "Division 1" << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }

}