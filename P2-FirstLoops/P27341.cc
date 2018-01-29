//Control C202D
#include <iostream>
using namespace std;


int main() {
    int a, b;
    while (cin >> a >> b) {
        cout << "suma dels cubs entre " << a << " i " << b << ": ";
        int suma = 0;
        for (int i = a; i <= b; ++i) suma += i*i*i;
        cout << suma << endl;
    }
}
