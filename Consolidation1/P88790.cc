//Màxim comú divisor iteratiu
#include <iostream>
using namespace std;


int mcd(int a, int b) {
    int res;
    
    while (b != 0) {
       res = a % b;
       a = b;
       b = res;
    }
    return a;
}


int main () {
    int x, y;
    cin >> x >> y;
    cout << mcd(x, y) << endl;
}
