//Màxim comú divisor de quatre
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

int mcd4(int a, int b, int c, int d) {
    int r;
    r = mcd(mcd(a ,b), mcd(c, d));
    return r;
}


int main () {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << mcd4(a, b, c, d) << endl;
}
