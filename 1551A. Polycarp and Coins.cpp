#include <iostream>
using namespace std;
int t,n;
main() {
	cin >> t;
	for(int i = 0; i < t; ++i) {
		cin >> n;
		if(n - (n/3 + (n/3) * 2) == 2) cout << n/3 << " " << n/3+1 << endl;
		else if(n - (n/3 + (n/3) * 2) == 1) cout << n/3+1 << " " << n/3 << endl;
		else cout << n/3 << " " << n/3 << endl;
	}
}
