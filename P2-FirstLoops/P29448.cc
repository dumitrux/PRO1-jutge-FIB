//Dates correctes
#include <iostream>
using namespace std;


int main() {
    int d, m, a;
    while (cin >> d >> m >> a) {
        if (m > 12 or m < 1 or a < 1800 or a > 9999) cout << "Data Incorrecta";
        else if(m == 1 and (d > 31 or d < 1)) cout << "Data Incorrecta";
        else if(m == 3 and (d > 31 or d < 1)) cout << "Data Incorrecta";
        else if(m == 4 and (d > 30 or d < 1)) cout << "Data Incorrecta";
        else if(m == 5 and (d > 31 or d < 1)) cout << "Data Incorrecta";
        else if(m == 6 and (d > 30 or d < 1)) cout << "Data Incorrecta";
        else if(m == 7 and (d > 31 or d < 1)) cout << "Data Incorrecta";
        else if(m == 8 and (d > 31 or d < 1)) cout << "Data Incorrecta";
        else if(m == 9 and (d > 30 or d < 1)) cout << "Data Incorrecta";
        else if(m == 10 and (d > 31 or d < 1)) cout << "Data Incorrecta";
        else if(m == 11 and (d > 30 or d < 1)) cout << "Data Incorrecta";
        else if(m == 12 and (d > 31 or d < 1)) cout << "Data Incorrecta";
        else if(m == 2 and (d < 29 or d > 1)) {
            if ((a%4 == 0 and a%100 != 0) or (a%100 == 0 and(a/100)%4 == 0)) {
                if (d > 29 or d < 1) cout << "Data Incorrecta";
                else cout << "Data Correcta";
            }
            else if (d > 28 or d < 1) cout << "Data Incorrecta";
            else cout << "Data Correcta";
        }
        else cout << "Data Correcta";
        cout << endl;
    }
}
