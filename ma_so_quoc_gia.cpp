#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int position = s.find("084");   
    s.erase( position , 3) ;
    cout << s << "\n";
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
