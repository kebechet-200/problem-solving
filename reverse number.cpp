#include <iostream>

using namespace std;

int main() {
    int N, a,b,c; // N shetanis cvladi; abc ricxvebi reversulad

    cin >> N; // sheitanos momxmarebelma N;

    a = N % 10; b = (N / 10) % 10; c = N / 100; // algoritmi romelic sheabrunebs cifrebs
    N = a * 100 + b * 10 + c; // aseulebis ateulebis da erteulebis tanrigi.
    cout << N << endl; // davbechdot shedegi.
}

