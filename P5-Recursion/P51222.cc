//Nombre de dígits recursiu
#include <iostream>
using namespace std;


int nombre_digits(int n) {
    if (n < 10) return 1;
    else return nombre_digits(n/10) + 1;
}


int main() {
    int n;
    while (cin >> n) {
        cout << nombre_digits(n) << endl;
    }
}
