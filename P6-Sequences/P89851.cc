//Quin falta?
#include <iostream>
using namespace std;


int main() {
    int n;
    while (cin >> n) {
        int seq, result = 0, suma1 = 0, suma2 = 0;
        for (int i = 1; i < n; ++i) {
            cin >> seq;
            suma1 += seq;
        }
        suma2 = ((1 + n)*n)/2;
        result = suma2 - suma1;
        cout << result << endl;
    }
}
