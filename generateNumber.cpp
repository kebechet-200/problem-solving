#include <iostream>

using namespace std;




int myMax(int arr[]) {
    int largestNum = arr[0];
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        if(largestNum < arr[i])
           largestNum = arr[i];
    }
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    return largestNum;
}

int main() {
    //gansazgvre array
    int arr[6] = {20,30,40,50,60,2};
    cout << myMax(arr);
}
