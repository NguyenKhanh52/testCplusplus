#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n ;
    int* ar = new int[n];
    for ( int i = 0 ;i < n ; i++) {
        cin >> ar[i];
    }

    int sum = 0 ;
    for ( int i = 0 ; i < n ; i++) {
        sum += ar[i];
    }
    cout << "Sum = " << sum << "\n";
    delete[] ar;
    system("pause");
    return 0;
}