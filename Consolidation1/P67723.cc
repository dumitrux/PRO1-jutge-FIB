//Màxim comú divisor
#include <iostream>
using namespace std;


int main() {
    int a, b;
    cin >> a >> b;
    cout << "El mcd de " << a << " i " << b << " es ";
    
    while (b != 0) {
        int r = a%b;
        a = b;
        b = r;
    }
    cout << a << "." << endl;
}
