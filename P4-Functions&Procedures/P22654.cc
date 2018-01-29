//Descomposició horària (2)
#include <iostream>
using namespace std;

void descompon(int n, int& h, int& m, int& s) {
    s = n%60;
    h = n/3600;
    m = (n/60)%60;
}
