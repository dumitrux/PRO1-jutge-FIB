//Avaluació de polinomis (1)
#include <iostream>
#include <cmath>
using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    double x, coeficient, resultat = 0;
    cin >> x;
    int i = 0;
    while (cin >> coeficient) {
        resultat += coeficient*pow(x,i);
        ++i;
    }
    cout << resultat << endl;
}
