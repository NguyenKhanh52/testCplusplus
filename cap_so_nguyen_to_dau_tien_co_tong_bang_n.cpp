#include <iostream>
#include <vector>

using namespace std;

const int maxn = 100001;
vector<bool> is_Prime(maxn, true) ;

void erstosthenes() {
    is_Prime[0]=is_Prime[1]= false;
    for(int i = 2; i * i <= maxn ; i++) {
        if(is_Prime[i]) {
            for(int j = i * i; j < maxn; j += i) { // đánh dấu các bội
                is_Prime[j] = false; //loai bo cac boi 
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;
    for(int i = 2; i <= n/2; i++) {
        if(is_Prime[i] && is_Prime[n-i]){ // Nếu cả 2 số đều là số nguyên tố
            cout << i << " " << n - i << "\n";
            return;
        }
    }
    cout <<"-1" << "\n";
}

int main() {
    int t;
    cin >> t;
    erstosthenes();
    while (t--) {
        solve();
    }
    system("pause");
    return 0;
}
