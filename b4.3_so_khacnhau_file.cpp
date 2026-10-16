#include <fstream>
#include <iostream>
#include <map>

using namespace std;

int main() {
  ifstream in("DATA3.in");

  map<int, int> count;
  int a;

  while (in >> a) {
    count[a]++;
  }
  for (auto c : count) {
    cout << c.first << " " << c.second << endl;
  }

  system("pause");
  return 0;
}