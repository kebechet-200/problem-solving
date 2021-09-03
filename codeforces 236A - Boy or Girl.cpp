#include <iostream>
#include <string.h>
#include <algorithm>
 
using namespace std;
string s;
int c=0, j;
 
int main() {
	cin >> s;
	int res = 1;
    for (int i = 0; i < s.size(); i++) {;
        for (j = 0; j < i; j++)
            if (s[i] == s[j])
                break;
        if (i == j)
            res++;
    }
	if(res%2==1) cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
}
