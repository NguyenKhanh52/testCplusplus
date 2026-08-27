#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 1000001;
vector<bool> is_prime(MAXN, true);

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAXN; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;
    for(int i = 2 ; i * i <= n ; i++) {
        if(is_prime[i]) {
            cout << i * i << " ";  
        }
    }
    cout << "\n";
} 

int main() {
    sieve();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    system("pause");
    return 0;
}
