#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n,c=0;
string s;
int main() {
	cin >> n >> s;
	for(int i = 0; i < s.size() -1; ++i) {
		if(s[i] == s[i+1]) c++;
	}
	cout << c;
}
