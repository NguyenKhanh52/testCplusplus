#include <iostream>

using namespace std;

void solve() {
    // TODO: Bai 1.14 - Uoc so chia het cho 2
    long long n;
    cin >> n;
    int count = 0;
    for (long long i = 1 ; i * i <= n ; i++) {
        if ( n % i == 0 ) {
            if ( i % 2 == 0 ) {
                count++;
            }
            if ( n/i != i && n/i % 2 == 0 ) { 
                count++;
            }
        }
    }
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    system("pause");
    return 0;
}
