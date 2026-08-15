#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

void solve() {
    // TODO: Bai 1.12 - Tinh khoang cach 
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double result = sqrt(pow(x2 - x1 , 2) + pow(y2 - y1 , 2));

    cout << fixed << setprecision(4) << result << endl;
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
