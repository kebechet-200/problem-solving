#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
 
using namespace std;
string a,b;
int main() {
	cin >> a >> b;
	std::for_each(a.begin(), a.end(), [](char & c) {
        c = ::toupper(c);
    });
    std::for_each(b.begin(), b.end(), [](char & c) {
        c = ::toupper(c);
    });
    
    if(a!=b) {
    	if(a<b) cout << -1;
    	else if(a>b) cout << 1;
	}
	else {
		cout << 0;
	}
}
