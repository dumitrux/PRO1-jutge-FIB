//Número de cifras
#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    for (int i = 2; i <= 16; ++i) {
        cout << "Base " << i <<": ";
        int x, cifras;
        x = n;
        cifras = 1;
        while (x >= i) {
            x /= i;
            ++cifras;
        }
        cout << cifras << " cifras." << endl;
    }
}
