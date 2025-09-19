    #include <iostream>
    #include <string>
    #include <cctype>
    #include <algorithm>
    #include <cmath>
    #include <iomanip>
    using namespace std;




    int main() {
       int N;
    cout << "Enter a number N: ";
    cin >> N;

    int* arr = new int[N];

    int even = 2;
    for (int i = 0; i < N; ++i) {
        arr[i] = even;
        even += 2;
    }

    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;














}

















