//La Pica d'Estats
#include <iostream>
using namespace std;


int main() {
    int a, b, c, pica;
    bool trobat = false;
    pica = 3143;
    cin >> a >> b >> c;
    while (c != 0 and !trobat) {
        if (b > pica and b > a and b > c) trobat = true;
        a = b;
        b = c;
        cin >> c;
    }
    if (trobat) cout << "SI" << endl;
    else cout << "NO" << endl;
}
