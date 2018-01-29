//Comparando fracciones
#include <iostream>
using namespace std;


bool c_frac(int n1, int d1, int n2, int d2) {
    double a, b;
    a = double(n1)/d1;
    b = double(n2)/d2;
    return a < b;
}
