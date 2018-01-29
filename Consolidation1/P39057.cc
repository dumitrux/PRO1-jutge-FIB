//Càlcul d'àrees
#include <iostream>
#include <cmath>
using namespace std;


int main () {
    cout.setf(ios::fixed);
    cout.precision(6);
    
    int n;
    string forma;
    double l, a, ar, r, ac;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        cin >> forma;
        if (forma == "rectangle") {
            cin >> l >> a;
            ar = l * a;
            cout << ar << endl;
        }
        
        if (forma == "cercle") {
            cin >> r;
            ac = r * r * M_PI;
            cout << ac << endl;
        }
    }
}
