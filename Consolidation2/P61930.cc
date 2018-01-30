//Múltiples de tres
#include <iostream>
using namespace std;


int suma_digits(int x) {
    if (x == 0) return 0;
    else return suma_digits(x/10) + x%10;
}


bool es_multiple_3(int n) {
    n = suma_digits(n);
    return n%3 == 0;
}


int main() {
    int n;
    while (cin >> n) {
        cout << es_multiple_3(n) << endl;
    }
}
