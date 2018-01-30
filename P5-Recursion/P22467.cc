//Primers perfectes
#include <iostream>
using namespace std;

bool es_primer(int n) {
    bool primer = true;
    if (n < 2) primer = false;
    else {
        for (int i = 2; i*i <= n and primer; ++i) {
            if (n%i == 0) primer = false;
        }
    }
    return primer;
}

int suma_digits(int n) {
    int suma = 0;
    while (n != 0) {
        suma += n%10;
        n /= 10;
    }
    return suma;
}

bool es_primer_perfecte(int n) {
    bool primer = es_primer(n);
    if (!primer or n < 10) return primer;
    else return es_primer_perfecte(suma_digits(n));
}

int main() {
    int n;
    while (cin >> n) {
        cout << es_primer_perfecte(n) << endl;
    }
}
