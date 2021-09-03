#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main() {
	string w;
	cin >> w;
	int c=0,p=0;
	for (int i = 0; i < w.size(); ++i)
	{
		if(isupper(w[i])) c++;
		else p++;
	}
	if(c>p) for(int i =0; i < w.size(); ++i) w[i]=toupper(w[i]);
	else for(int i =0; i < w.size(); ++i) w[i]=tolower(w[i]);
	cout << w;
}
