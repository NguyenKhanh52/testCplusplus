#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

struct Point {
  double x, y;
};

double distance(Point a, Point b) {
  return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    Point A, B;
    cin >> A.x >> A.y >> B.x >> B.y;
    double d = distance(A, B);
    cout << fixed << setprecision(4) << d << endl;
  }
  system("pause");
  return 0;
}