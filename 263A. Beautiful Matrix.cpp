#include <bits/stdc++.h>
#include <cmath>	
using namespace std;
int n,c=0;
int main() {
	for(int i = 0; i < 5; ++i) {
		for(int k = 0; k < 5; ++k) {
			cin >>n;
			if(n==1) c = abs(i-2) + abs(k-2);
		}
	}
	cout << c;
}
