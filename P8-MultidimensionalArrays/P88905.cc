//Productes de matrius qualssevol
#include <iostream>
#include <vector>
using namespace std;


typedef vector< vector<int> > Matriu;


Matriu producte(const Matriu& a, const Matriu& b) {
    int m = a.size();
    int n = a[0].size();
    int p = b[0].size();
    
    Matriu c(m, vector<int> (p));
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            for (int k = 0; k < n; ++k) c[i][j] += a[i][k]*b[k][j];
        }
    }
    return c;
}
