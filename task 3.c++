    #include <iostream>
    #include <string>
    #include <cctype>
    #include <algorithm>
    #include <cmath>
    #include <iomanip>
    using namespace std;




    int main() {
      int N;
    cout << "Enter the number N: ";
    cin >> N;

    int* arr = new int[N];

    for (int i = 1; i <= N; ++i) {
        arr[i - 1] = i * i;
    }

    cout << "The squares of numbers from 1 to " << N << " are: ";
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;














}

















