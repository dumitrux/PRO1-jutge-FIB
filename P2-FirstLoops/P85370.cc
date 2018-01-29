//Interessos (1)
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int t;
    double c, i, e;
    string sc;
    cin >> c >> i >> t >> sc;
    
    if (sc == "simple") {
        i = i / 100;
        e = c + (c * i * t);
        cout << e << endl;
    }
    
    else if (sc == "compost") {
        i = i / 100;
        e = c * ( pow (1 + i, t) ); 
        cout << e << endl;
    }
}
