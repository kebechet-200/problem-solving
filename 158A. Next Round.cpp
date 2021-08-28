#include <iostream>	
using namespace std;
int n,k,a,b=0,mas[10000];
int main() {
	cin >> n >> k;
	for(int i = 0; i < n; ++i) {
		cin >> a;
		mas[i] = a;
	}
	for (int i = 0; i < n; ++i)
		if(mas[i] >= mas[k-1] && mas[i] >0) b++;
	cout << b;	
}
