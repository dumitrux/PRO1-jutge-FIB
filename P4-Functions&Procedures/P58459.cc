//Dates vàlides
#include <iostream>
using namespace std;


bool es_data_valida(int d, int m, int a) {
    bool valida = true;
    
    if ((a >= 1800 and a <= 9999) and (m >= 1 and m <= 12) and 
        (d >= 1 and d <=31)) {
            if (m == 4 or m == 6 or m == 9 or m == 11) {
                valida = (d >= 1 and d <= 30);
            }
            else if (m == 2) {
                if ((a%4 == 0 and a%100 != 0) or (a%400 == 0)) 
                    valida = (d >= 1 and d <= 29);
                else valida = (d >= 1 and d <= 28);
            }
    }
    else valida = false;
    
    return valida;
}
