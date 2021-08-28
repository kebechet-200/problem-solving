#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int w;
    cin >> w;
    for(int i = 0; i < w; ++i) {
    	string str;
    	cin >> str;
    	if(str.length() > 10) cout << str[0] << str.length() - 2 << str.back() << endl;
    	else cout << str << endl;
	}
}
