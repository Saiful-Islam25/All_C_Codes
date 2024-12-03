#include<iostream>
using namespace std;
int main()
{
    int n;
    int p, q;
    int count{0};
    const int Space{2};

    cin >> n;

    while (n--)
    {
        cin >> p >> q;

        if (q - p >= Space)
        {
            count++;
        }

    }
        cout << count << "\n";

}
