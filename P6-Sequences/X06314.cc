//Secuencias similares (2)
#include <iostream>
using namespace std;
 
 
void info_sequencia(int& suma, int& ultim) {
        suma = suma + ultim;  
}
 
int main() {
        int n, suma, suma0, ultim, ultim0, count = 1;
        suma = 0;
        while (cin >> n && n != 0) {
                ultim = n;
                info_sequencia(suma, ultim);
        }
        ultim0 = ultim;
        suma0 = suma;
        while (cin >> n && n!= 0) {
                ultim = n;
                suma = n;
                while (cin >> n && n != 0) {
                        ultim = n;
                        info_sequencia(suma, ultim);
                }
                if (suma0 == suma && ultim == ultim0) ++count;
                suma = 0;
                ultim = 0;
        }
        cout << count << endl;
}
