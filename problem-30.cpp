#include <iostream>

using namespace std;

int a,b,c;

main() {
	cin >> a >> b >> c;
	if (a==b+c) cout << a << "=" << b << "+" << c;
	else if (a==b-c) cout << a << "=" << b << "-" << c;
	else if (a==b*c) cout << a << "=" << b << "*" << c;
	else if (a==b/c) cout << a << "=" << b << "/" << c;
	else if (a+b==c) cout << a << "+" << b << "=" << c;
	else if (a-b==c) cout << a << "-" << b << "=" << c;
	else if (a*b==c) cout << a << "*" << b << "=" << c;
	else if (a/b==c) cout << a << "/" << b << "=" << c;
	
}
