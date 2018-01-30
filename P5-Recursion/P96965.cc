//Reducció de dígits
#include <iostream>
using namespace std;


int suma_digits(int x) {
    if (x == 0) return x;
    else return suma_digits(x/10) + x%10;
}


int reduccio_digits(int x) {
    if (x < 10) return x;
    else return reduccio_digits(suma_digits(x));
}


int main() {
    int n;
    while (cin >> n) {
        cout << reduccio_digits(n) << endl;
    }
}
