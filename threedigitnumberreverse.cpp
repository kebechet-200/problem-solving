/*
we can reverse three digit number of popular algorithm , a.e we have 512 , we need to access 5, what to do? n / 512, 1: (n % 100) / 10, 2: (n %100)%10
*/


#include <iostream>
using namespace std;
int main() {
    int n,a,b,c;
    cin >> n;
    a = n / 100;
    b = (n%100) / 10;
    c = (n%100)%10;
    n = c*100+b*10+a;
    cout << n;
    return 0;
}
