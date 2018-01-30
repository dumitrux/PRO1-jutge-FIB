//Control C302F
#include <iostream>
using namespace std;


int main() {
    int n, contador = 0;
    char c;
    cin >> n;
    while (cin >> c) {
        if (c == 'a') cout << ".-";
        else if (c == 'e') cout << ".";
        else if (c == 'i') cout << "..";
        else if (c == 'o') cout << "---";
        else if (c == 'u') cout << "..-";
        
        if (c == 'a' or c == 'i' ) contador += 2;
        else if (c == 'e') contador += 1;
        else contador += 3;
        
        if (contador >= n) {
            contador = 0;
            cout << endl;
        }
    }
    if (contador != 0) cout << endl;
    cout << "STOP" << endl;
}
