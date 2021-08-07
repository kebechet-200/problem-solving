#include <iostream>

using namespace std;

int n,k,r;

main () {
	cin >> n >> k;
	int r = k - n*2;
	if(n>r) cout<<n-r;
	else cout << 0; 
}
