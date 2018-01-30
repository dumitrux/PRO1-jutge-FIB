//P0003. Nombres amics
#include <iostream>
using namespace std;
 
 
int suma_divisors(int a) {
        int suma = 0;
        int divisor = 1;
        while (divisor <= a/2) {
                if (a%divisor == 0) {
                        suma = suma + divisor;
                }
                ++divisor;
        }
        return suma;
}
 
bool son_amics(int a, int b) {
        if (a == b) return false;
        else {
                if (suma_divisors(a) == b && suma_divisors(b) == a) return true;
                return false;
        }
}
 
int main() {
        int a, b;
        bool primer = true;
        while (cin >> a >> b) {
                if (son_amics(a, b)) {
                        if (primer) cout << '(' << a << ' ' << b << ')';
                        else cout << ",(" << a << ' ' << b << ')';
                        primer = false;
                }
        }
        cout << endl;
}
