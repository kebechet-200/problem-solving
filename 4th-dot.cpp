#include <iostream>

using namespace std;

short x1,y1,x2,y2,x3,y3;

main () {
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if (x1 == x2) cout << x3 << " ";
	if (x2 == x3) cout << x1 << " ";
	if (x1 == x3) cout << x2 << " ";
	if (y2 == y3) cout << y1 << endl;
	if (y1 == y3) cout << y2 << endl;
	if (y1 == y2) cout << y3 << endl;
}
