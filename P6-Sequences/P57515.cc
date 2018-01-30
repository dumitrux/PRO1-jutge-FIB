//P0019. Rotacions cap a la dreta
#include <iostream>
#include <cmath>
using namespace std;


int nombre_digits(int n) {
    int contador = 1;
    while (n > 9) {
        n /= 10;
        ++contador;
    }
    return contador;
}


int rotacio_dreta(int x, int k) {
    int digits, dreta, resultat, ndigits;
    digits = pow(10, k);
    dreta = x%digits;
    resultat = x/digits;
    ndigits = nombre_digits(x) - k;
    resultat = resultat + dreta*pow(10, ndigits);
    return resultat;
}


int main() {
    int x, k;
    while (cin >> x >> k) {
        cout << rotacio_dreta(x, k) << endl;
    }
}
