//Tauler d'escacs (3)
#include <iostream>
using namespace std;


int main() {
    int mida, suma = 0;
    cin >> mida;
    char moneda;
    for (int i = 0; i < mida; ++i) {
        for (int j = 0; j < mida; ++j) {
            cin >> moneda;
            if (i == j or (i+j) == mida - 1) suma += moneda - '0';
        }
    }
    cout << suma << endl;
}
