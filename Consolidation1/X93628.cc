//Chessboards
#include <iostream>
using namespace std;


int main() {
    int n;
    while (cin >> n) {
        for (int fila = 0; fila < n; ++fila) {
            for (int columna = 0; columna < n; ++columna) {
                if ((fila+columna)%2 == 0) cout << ".";
                else cout << "x";
            }
            cout << endl;
        }
        cout << endl;
    }
}
