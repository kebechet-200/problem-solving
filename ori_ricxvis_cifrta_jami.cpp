// ori ricxvis cifrta jami;

#include <iostream>

using namespace std;

int main() {
    int N; //shesatani cvladi
    cin >> N; // momxmarebels shemoaqvs mnishvneloba romelic inaxeba N cvladshi
    if (N >= 10 && N <= 99) { // piroba tu ricxvi ornishnaa
        cout << N / 10 + N % 10; // algoritmi ricxvshi shemavali cifrebistvis, tu ricxvi gamyof ricxvze naklebia nashti tavad es ricxvi iqneba.
    }
    else { //sxva shemtxvevashi
        cout << "Shetanili ricxvi ar aris ornishna";
    }

}

