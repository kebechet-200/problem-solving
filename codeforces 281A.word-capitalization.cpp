#include <iostream>
#include <string>

using namespace std;

string s;

int main() {
	cin >> s;
	s[0] = toupper(s[0]);
	cout << s;	
}

