#include <iostream>
using namespace std;

int a,b,c,am, bm,cm;
int r;

main() {
    cin >> a >> b >> c >> am >> bm >> cm;
    if(a <= am) r++;
    if(b <= bm) r++;
    if(c <= cm) r++;
    if(r>=2) cout << "YES"; else cout << "NO";
}
