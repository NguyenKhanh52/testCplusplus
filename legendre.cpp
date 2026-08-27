#include <iostream>

using namespace std;

void solve() {
    long long n, p;
    cin >> n >> p;
    long long x = 0 ; 
    long long p1 = p;
    while ( p1 <= n ) {
        x += n / p1;   // dem so luong boi so cua p^k
        if ( p1 > n/p ) break; // tranh tran so khi p1 *= p
        p1 *= p;
    }
    cout << x << "\n";
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
