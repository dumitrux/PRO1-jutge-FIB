//Exchange rates
#include <iostream>
#include <string>
using namespace std;


int main () {
  cout.setf(ios::fixed);
  cout.precision(4);
  
  double cost, sec;
  double tote = 0.0;
  double totu = 0.0;
  string moneda;
  
  cin >> cost;
  
  while (cin >> sec >> moneda) {
    
    if (moneda == "EUR") {
      tote = tote + sec;
    }
    
    else {
      totu = totu + sec;
    }
  }
  cout << tote + totu / cost << " ";
  cout << totu + tote * cost << endl;
}
