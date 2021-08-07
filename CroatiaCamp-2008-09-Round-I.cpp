#include <iostream>

using namespace std;

short a,b,c;

main() {
	cin >> a >> b >> c;
	if (b-a>c-b) cout << b-a-1; else cout << c-b-1;
}
