//Potencias
#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int base, potencia, resultat;
    while (cin >> base >> potencia) {
        resultat = pow(base, potencia);
        cout << resultat << endl;
    }
}
