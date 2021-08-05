#include <iostream>

using namespace std;

int a,b,c;

main () {
	cin >> a >> b >> c;
	if ((a+b)>c && (a+c) > b && (b+c)>a) cout << "YES"; else cout << "NO";
}
