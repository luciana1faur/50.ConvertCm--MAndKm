#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double cm, m, km;
  cout << "Introduceti cm: ";
  cin >> cm;

  m = cm / 100;
  km = cm /100000;

 cout << cm << " sunt " << m << " metri" << endl;
 cout << cm << " sunt " << km << " kilometri " << endl;
 return 0;
}
//Convert centimeter into meter and kilometer :