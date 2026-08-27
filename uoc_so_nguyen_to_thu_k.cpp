#include <iostream>

using namespace std;

void solve() {
    // TODO: Bài 1.19 - Ước số nguyên tố thứ K
    int n, k;
    cin >> n >> k;
    int count = 0; 
    for ( int i = 2 ; i * i <= n ; i++) {
        while( n % i == 0 ) {
            count++;
            if (count == k) {
                cout << i << " ";
                return;
            }
            n /= i;
        }
    }
    if ( n > 1 ) { // Nếu sau khi chia hết cho căn bậc 2 của N thì N > 1
                // nghĩa là N còn lại một ước số nguyên tố 
        count++;
        if(count == k ) {
         cout << n << " ";
         return;  
        }
    }
    cout << "-1" << " ";

    
    
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
