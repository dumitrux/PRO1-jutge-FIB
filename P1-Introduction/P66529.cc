//Interessos (2)
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    
    double i, TAE;
    string periode;
    cin >> i >> periode;

    int f;
    i /= 100;
    if (periode == "setmanal") f = 52;
    if (periode == "mensual" ) f = 12;
    if (periode == "trimestral") f = 4;
    if (periode == "semestral") f = 2;
    TAE = pow ((1 + i/f), f) - 1;
    cout << TAE*100 << endl;
}
