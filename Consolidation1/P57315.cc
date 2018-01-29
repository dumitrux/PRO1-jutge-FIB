//ABC
#include <iostream>
#include <string>
using namespace std;
 
int main() {
  int x, y, z, max, min, med;
  string m;
  cin >> x >> y >> z;
  cin >> m;
  if (x >= y and x >= z){
    max = x;
    if (y>= z) {
      min = z;
      med = y;
    }
    else {
      min = y;
      med = z;
    }
  }
  else if (y >= z) {
    max = y;
    if (x >= z) {
      min = z;
      med = x;
    }
    else {
      min = x;
      med = z;
    }
  }
  else {
    max = z;
    if (x >= y) {
      min = y;
      med = x;
    }
    else {
      min = x;
      med = y;
    }
  }
  if (m == "ABC") cout << min << ' ' << med << ' ' << max << endl;
  else if (m == "ACB") cout << min << ' ' << max << ' ' << med << endl;
  else if (m == "BAC") cout << med << ' ' << min << ' ' << max << endl;
  else if (m == "CAB") cout << max << ' ' << min << ' ' << med << endl;
  else if (m == "BCA") cout << med << ' ' << max << ' ' << min << endl;
  else cout << max << ' ' << med << ' ' << min << endl;
}
