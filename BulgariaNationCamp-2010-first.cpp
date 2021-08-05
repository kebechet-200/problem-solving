#include <iostream>

using namespace std;

int c;


main () {
	cin >> c;
	int f1 = (c/10)* (c%10);
	int f2 = (c/100)* (c%100);
	if (f1>f2) cout << f1;
	else cout << f2;	
}
