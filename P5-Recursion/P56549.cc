//Changes of base
#include <iostream>
using namespace std;


void escriu_base(int n, int base) {
    if (n > 0) {
        escriu_base(n/base, base);
        int x = n%base;
        if (x > 9) {
            if (x == 10) cout << "A";
            else if (x == 11) cout << "B";
            else if (x == 12) cout << "C";
            else if (x == 13) cout << "D";
            else if (x == 14) cout << "E";
            else cout << "F";
        }
        else cout << x;
    }
}


int main() {
    int n, base;
    while (cin >> n) {
        cout << n << " = ";
        if (n == 0) cout << 0 << ", " << 0 << ", " << 0 << endl;
        else {
            base = 2;
            escriu_base(n, base);
            cout << ", ";
            base = 8;
            escriu_base(n, base);
            cout << ", ";
            base = 16;
            escriu_base(n, base);
            cout << endl;
        }
    }
}
