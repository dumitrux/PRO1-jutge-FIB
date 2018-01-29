//Nombre de dígits (1)
#include <iostream>
using namespace std;


int main() {
    int n, cont = 1;
    cin >> n;
    cout << "El nombre de digits de " << n << " es ";
    while (n > 9) {
        n /= 10;
        ++cont;
    }
    cout << cont << "." << endl;
}
