//Producte escalar
#include <iostream>
#include <vector>
using namespace std;


double producte_escalar(const vector<double>& u, const vector<double>& v) {
    double prod = 0.0;
    for (int i = 0; i < u.size(); ++i) {
        prod += u[i]*v[i];
    }
    return prod;
}
