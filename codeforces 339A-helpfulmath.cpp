#include <iostream>
#include <string>

using namespace std;
string s;

int main() {
	cin >> s;
	for(int i = 0; i < s.size()-1; i+=2) {
		for(int j = 0; j < s.size()-i-1; j+=2) {
			if(s[j] > s[j+2]) {
				int p = s[j];
				s[j] = s[j+2];
				s[j+2] = p;
		}
		}
	}	
	
	cout << s;
}
