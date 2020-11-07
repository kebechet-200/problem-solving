#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int ca,cb;

    cin >> a;
    cin >> b;

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            ca++;
        }
        if (b[i] > a[i]) {
            cb++;
        }

    cout << ca << " " << cb;
    }
}
