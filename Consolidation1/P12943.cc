//Control C202C
#include <iostream>
using namespace std;


int main () {
    int n, a = 0, b = 0, c = 0;
    char resposta;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        cin >> resposta;
        if (resposta == 'a') ++a;
        else if (resposta == 'b') ++b;
        else if (resposta == 'c') ++c;
    }
    if (a >= b and a >= c) 
        cout << "majoria de a" << endl << a << " repeticio(ns)" << endl;
    else if (b >= c)
        cout << "majoria de b" << endl << b << " repeticio(ns)" << endl;
    else cout << "majoria de c" << endl << c << " repeticio(ns)" << endl;
}
