#include <bits/stdc++.h>
using namespace std;

int main()
{

    long t;
    scanf("%ld", &t);
    while (t--)
    {
        vector<pair<long, long>> a(4);
        for (long i = 0; i < 4; i++)
        {
            scanf("%ld", &a[i].first);
            a[i].second = i;
        }
        sort(a.rbegin(), a.rend());
        long x(a[0].second), y(a[1].second);
        x /= 2;
        y /= 2;
        puts(x == y ? "NO" : "YES");
    }
}