#include <bits/stdc++.h>
using namespace std;
int k,n,w,c=0;
int main() {
	cin >> k >> n >> w;
	for(int i = 1; i <= w; ++i) c += i*k;
	if(c>n) cout << c-n;
	else cout << 0;
}
