// L'últim teorema de Fermat (2)
#include <iostream>
using namespace std;
 
int main() {
    bool trovat = false;
    int a, b, c, d, x, y, z;
    while (cin >> a >> b >> c >> d) {
        if (a <= b and c <= d) {
            if ((a == 0 or c == 0) and not trovat) {
                trovat = true;
                z = a + c;
                x = a;
                y = c;
            }
        }
    }
    if (trovat) cout << x << "^3 + " << y << "^3 = " << z << "^3" << endl;
    else cout << "Sense solucio!" << endl;
}
