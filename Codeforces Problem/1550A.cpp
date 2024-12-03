#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin >> t;
        while(t --)
        {
                int n;
                cin >> n;
                int x;
                for( x = 1; x * x < n ; x ++) ;
                cout << x << '\n';
        }
        return 0;
}
