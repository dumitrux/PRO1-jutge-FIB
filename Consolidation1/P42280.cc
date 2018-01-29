//Tauler d'escacs (1)
#include <iostream>
using namespace std;


int main () {
    int fil, col;
    char mon;
    cin >> fil >> col;
    int tot = 0;
    
    for (int j = 0; j < fil; ++j) {
        for (int i = 0; i < col; ++i) {
            cin >> mon;
            mon = int (mon) - '0';
            tot = tot + mon;
        }
    }
    cout << tot << endl;
}
