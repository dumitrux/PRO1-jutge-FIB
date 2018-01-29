//Dia de la setmana
#include <iostream>
using namespace std;


string dia_de_la_setmana(int d, int m, int a) {
    int  c, f, y;
    string dia;
    m = m - 2;
    if (m <= 0) {
        m += 12;
        a -= 1;
    }
    c = a/100;
    y = a%100;
    f = ((2.6*m) - 0.2);
    f = f + d + y + (y/4) + (c/4) - 2*c;
    while (f < 0) f += 7;
    f = f%7;
    if (f == 0) dia = "diumenge";
    else if (f == 1) dia = "dilluns";
    else if (f == 2) dia = "dimarts";
    else if (f == 3) dia = "dimecres";
    else if (f == 4) dia = "dijous";
    else if (f == 5) dia = "divendres";
    else dia = "dissabte";
    return dia;
}


int main() {
    int d, m ,a;
    while(cin >> d >> m >> a) {
        cout << dia_de_la_setmana(d, m ,a) << endl;
    }
}
