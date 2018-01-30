//Màxim comú divisor recursiu
#include <iostream>
using namespace std;


int mcd(int a, int b) {
    if (b == 0) return a;
    else return mcd(b, a%b);
}


int main() {
    int a, b;
    while (cin >> a >> b) {
        cout << mcd(a, b) << endl;
    }
}
