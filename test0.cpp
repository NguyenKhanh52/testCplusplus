#include <bits/stdc++.h>
using namespace std;

class Phuongtien {
protected:
  string plate;
  double maxspeed;

public:
  Phuongtien(string pl, double sp) {
    plate = pl;
    maxspeed = sp;
  }
  double getmaxspeed() { return maxspeed; }
  void display() {
    cout << "Bien so: " << plate << endl
         << "Toc do toi da : " << maxspeed << "km/h" << endl;
  }
};
class xetai : public Phuongtien {
private:
  double weight;

public:
  xetai(string pl, double sp, double tt) : Phuongtien(pl, sp) { weight = tt; }
  bool checksp(double speed) { return speed <= maxspeed; }
};

int main() {
  xetai xe1("29C1", 38, 36);
  xe1.display();

  double currentsp = 18;
  cout << "Toc do toi da: " << xe1.getmaxspeed() << endl
       << "Kiem tra toc do: " << currentsp << xe1.checksp(currentsp) << endl;

  return 0;
}