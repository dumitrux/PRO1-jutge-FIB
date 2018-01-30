//Països i províncies (2)
#include <iostream>
#include <vector>
using namespace std;


struct Provincia {
    string nom;
    string capital;
    int habitants;
    int area;
    double pib;
};

struct Pais{
    string nom;
    string capital;
    vector<Provincia> provs;
};

typedef vector<Pais> Paisos;

int habitants(const Paisos& p, double x) {
    int n = p.size();
    int suma = 0;
    for (int i = 0; i < n; ++i) {
        int cont = 0;
        int m = p[i].provs.size();
        for (int j = 0;j < m; ++j) {
            if (p[i].provs[j].pib <= x) ++cont;
            if (cont == 2) j = m;
        }
        if (cont > 1) {
            for (int j = 0; j < m; ++j) {
                suma += p[i].provs[j].habitants;
            }
        }
    }
    return suma;
}
