#include <iostream>

using namespace std;

double n;


main () {
	cin >> n;
	if (n <= 127 && n >= -128) cout << "byte";
	else if (n <= 32768 && n >= -32768) cout << "short";
	else if (n <= 2147483648 && n >= -2147483648) cout << "int";
	else if (n <= 9223372036854775807 && n >= -9223372036854775807) cout << "long";
	else cout << "BigInteger";
}
