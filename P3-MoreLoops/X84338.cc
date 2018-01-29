//Suma de mitades de un número relacionadas
#include <iostream>
using namespace std;


int main () {
    int n, dig = 0;
    int a = 0;
    int b = 0;
    cin >> n;
    
    for (int i = n; i != 0; i = i / 10) ++dig;
    if (dig % 2 != 0 or n == 0) cout << "nada" << endl;
    
    else {
        dig = dig / 2;
        for (int at = dig; at != 0; --at) {
            a = a + n % 10;
            n = n / 10;
        }
        for (int bt = dig; bt != 0; --bt) {
            b = b + n % 10;
            n = n /10;
        }
        
        if ( a > b) cout << b << " < " << a << endl;
        else if (a < b) cout << b << " > " << a << endl;
        else cout << b << " = " << a << endl;
    }
}
