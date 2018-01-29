//La seqüència de Collatz
#include <iostream>
using namespace std;


int main() {
    int n;
    while (cin >> n) {
        int contador = 0;
        while (n != 1) {
            if (n %2 == 0) n /= 2;
            else n = n*3 + 1;
            ++contador;
        }
        cout << contador << endl;
    }
}
