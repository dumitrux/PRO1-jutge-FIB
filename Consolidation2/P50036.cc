//Regla de Horner
#include <iostream>
#include <vector>
using namespace std;


int avalua(const vector<int>& p, int x) {
    int cuenta = 0;
    for (int i = p.size() - 1; i > 0; --i) cuenta = (p[i] + cuenta)*x;
    cuenta += p[0];
    return cuenta;
}
