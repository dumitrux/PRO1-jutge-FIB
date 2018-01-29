//Suma de dígitos(2)
#include <iostream>
using namespace std;


int main() {
    int base, numero;
    cin >> base;
    while (cin >> numero) {
        cout << numero << ": ";
        int suma = 0;
        while (numero != 0) {
            suma += numero%base;
            numero /= base;
        }
        cout << suma << endl;
    }
}
