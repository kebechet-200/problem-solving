#include <iostream>
using namespace std;
int n,k,c=0,total=0;
main() {
	cin >> n >> k;
	for (int i = 1; i <= n; ++i)
	{
		total += 5*i;
		if(total + k <= 240) c++;
	}
			
	cout << c;
}
