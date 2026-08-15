#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++) {
        if (abs(s[i] - s[i - 1]) != 1) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
