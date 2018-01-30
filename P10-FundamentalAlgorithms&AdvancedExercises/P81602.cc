//Ordenació per selecció
#include <iostream>
#include <vector>
using namespace std;
 
 
void ordena_per_seleccio(vector<double>& v, int m) {
        if (m > 0) {
                double max = v[0];
                int pos = 0;
                for (int i = 1; i <= m; ++i) {
                        if (v[i] > max) {
                                max = v[i];
                                pos = i;
                        }
                }
                v[pos] = v[m];
                v[m] = max;
                return ordena_per_seleccio(v, m-1);
        }
}
