#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int res = max(max(a, b), c) - min(min(a, b), c) ;
    cout<<res<<endl;
	return 0;
}