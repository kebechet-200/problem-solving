#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b;
	int c = 1;
	cin >> a >> b;
	while(a*3 <= b*2) {
		a*=3;
		b*=2;
		c++;
	}
	cout << c;
}
