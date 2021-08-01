#include <iostream>

using namespace std;

main () {
	int a,b;
	cin >> a >> b;
	if (a>b) cout << b << " " << (a-b) / 2;
	else cout << a << " " << (b-a) / 2; 
}
