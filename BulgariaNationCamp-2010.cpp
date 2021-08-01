#include <iostream>

using namespace std;

long v,n;

main () {
	cin >> v >> n;
	if (v/3 < n) cout << "YES " << n-v/3;
	else cout << "NO";
}
