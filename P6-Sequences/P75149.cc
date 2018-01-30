//Buscant una a
#include <iostream>
using namespace std;


int main() {
    char c;
    bool a = false;
    cin >> c;
    while (c != '.' and not a) {
        if (c == 'a') a = true;
        cin >> c;
    }
    if (a) cout << "si" << endl;
    else cout << "no" << endl;
}
