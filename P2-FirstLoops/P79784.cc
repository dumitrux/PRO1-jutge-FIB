//Moviments en el pla
#include <iostream>
using namespace std;


int main () {
    char mov;
    int s = 0, n= 0, e = 0, o = 0;
    
    while (cin >> mov) {
        if (mov == 's') ++s;
        else if (mov == 'n') ++n;
        else if (mov == 'e') ++e;
        else if (mov == 'o') ++o;
    }
    cout << "(" << e - o << ", " << s - n << ")" << endl;
}
