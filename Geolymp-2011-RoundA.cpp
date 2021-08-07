#include <iostream>

using namespace std;
short b;
main () {
	cin >> b;
	if (b<0) cout << -b;
	else if (b%2==0) cout << b/2;
	else cout << b/2 + 2;
}
