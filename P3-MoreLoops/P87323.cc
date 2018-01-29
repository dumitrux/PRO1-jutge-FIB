//Rectangles diagonals
#include <iostream>
using namespace std;


int main() {
    int fila, columna;
    cin >> fila >> columna;
    for (int i = 0; i < fila; ++i) {
        int distancia = -i;
        for (int j = 0; j < columna; ++j) {
            if (distancia < 0) cout << (-distancia)%10;
            else cout << distancia%10;
            ++distancia;
        }
        cout << endl;
    }
}
