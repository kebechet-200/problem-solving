#include <iostream>	
using namespace std;
int n,x=0;
string m;
int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> m;
		if(m=="++X" || m=="X++") ++x;
		else --x;
	}
	cout << x;
}
