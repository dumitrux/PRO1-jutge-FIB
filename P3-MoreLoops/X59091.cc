//Rectángulos (2)
#include <iostream>
using namespace std;


int main() {
    int fila, columna;
    bool primer = true;
    while (cin >> fila >> columna) {
        int x = 9;
        if (!primer) cout << endl;
        for (int i = 0; i < fila; ++i) {
            for (int j = 0; j < columna; ++j) {
                if (x < 0) x = 9;
                cout << x;
                --x;
            }
            cout << endl;
        }
        primer = false;
    }
}
