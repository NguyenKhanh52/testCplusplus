#include <iostream>

using namespace std;

bool checksphenic ( int n) {
    int count_prime = 0;
    for (int i = 2 ; i*i <= n ; i++) {
        if ( n % i == 0 ) {
            count_prime++;
            n /= i;

            if ( n % i == 0) return false;
        }
    }
     // vi chi duyet den can n nen se con thua ra 1 so
    // va so do chac chan la prime 
    if ( n > 1 ) count_prime++;  
    return count_prime == 3;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if ( checksphenic(n)) cout << "1" << endl;
        else cout << "0" << endl;
    }
    system("pause");
    return 0;
}
