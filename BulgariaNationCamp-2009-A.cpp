#include <iostream>

using namespace std;

long m,n,k,p,z,q;


main () {
	cin >> m >> n >> k;
	p = k * 1024;
	z = m * 60 + n;
	q = z * 16;
	if(q>p) cout << "NO\n" << q-p;
	else cout << "YES"; 	
}
