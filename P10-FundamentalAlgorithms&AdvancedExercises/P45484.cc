//Quadrat màgic
#include <iostream>
#include <vector>
using namespace std;
 
 
typedef vector< vector<int> > Matrix;
 
bool quadrat_magic(const vector< vector<int> >& t) {
        int tam = t.size();
        int aux_comp = 0;
        for (int i = 0; i < tam; ++i) {
                aux_comp += t[i][0];
        }
        //Horitzontal
        for (int i = 0; i < tam; ++i) {
                int suma = 0;
                for (int j = 0; j < tam; ++j) {
                        suma += t[i][j];
                }
                if (suma != aux_comp) return false;
        }
        //Vertical
        for (int j = 0; j < tam; ++j) {
                int suma = 0;
                for (int i = 0; i < tam; ++i) {
                        suma += t[i][j];
                }
                if (suma != aux_comp) return false;
        }

        int i = 0;
        int j = 0;
        int suma = 0;
        while (i < tam && j < tam) {
                suma += t[i][j];
                ++i;
                ++j;
        }
        if (suma != aux_comp) return false;
        //Diagonal 2
        i = tam-1;
        j = 0;
        suma = 0;
        while (i >= 0 && j < tam) {
                suma += t[i][j];
                ++j;
                --i;
        }
        if (suma != aux_comp) return false;

        for (int k = 1; k <= tam*tam; ++k) {
                bool found = false;
                for (i = 0; i < tam && not found; ++i) {
                        for (j = 0; j < tam && not found; ++j) {
                                if (not found && t[i][j] == k) found = true;
                        }
                }
                if (not found) return false;
        }
        //Tot correcte
        return true;
}
