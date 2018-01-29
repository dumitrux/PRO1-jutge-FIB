//Producte de dígits
#include <iostream>
using namespace std;


int main() {
    int n;
    while (cin >> n) {
        if (n < 10) cout << "El producte dels digits de " << n << " es " << n 
                << "." << endl;
        else {
            while (n > 9) {
                cout << "El producte dels digits de " << n << " es ";
                int producte = 1;
                while (n != 0) {
                    producte *= n%10;
                    n /= 10;
                }
                cout << producte << "." << endl;
                n = producte;
            }
        }
        cout << "----------" << endl;
    }
}
