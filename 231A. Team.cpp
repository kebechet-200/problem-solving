#include <iostream>	
using namespace std;
int main() {
	int n,x,y,z;
	cin >> n;
	int c = 0;
	for(int i = 0; i < n; ++i) {
		cin >> x >> y >> z;
		if((x == 1 && y == 1) || (y==1 &&z==1) ||(x ==1 &&z==1)) c++; 
	}
	cout << c;
}
