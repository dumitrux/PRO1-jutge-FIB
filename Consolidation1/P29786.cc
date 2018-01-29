//Funció per a les potències de 3
#include <iostream>
using namespace std;


bool es_potencia_de_3(int n) {
    bool potencia3 = true;
    while (potencia3 and n >= 3) {
        potencia3 = (n%3 == 0);
        n = n/3;
    }
    if (n < 3  and n != 1) potencia3 = false;
    return potencia3;
}


int main() {
    int n;
    while (cin >> n) {
        cout << es_potencia_de_3(n) << endl;
    }
}
