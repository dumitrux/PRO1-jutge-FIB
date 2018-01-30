//F009A. Recorrent matrius
#include <iostream>
#include <vector>
using namespace std;
 
 
typedef vector< vector<int> > Matriu;
 
int suma_linia(const Matriu& mat, int of, int oc, int df, int dc) {
        int suma = 0;
        int baixar = 2;
        int dreta = 2;
        if (of == df && oc < dc) dreta = 1;
        else if (of == df && oc > dc) dreta = 0;
        else if (oc == dc && of < df) baixar = 1;
        else if (oc == dc && of > df) baixar = 0;
       
        if (dreta == 1) {
                while (oc < dc) {
                        ++oc;
                        suma += mat[of][oc];
                }
        }
        else if (dreta == 0) {
                while (oc > dc) {
                        --oc;
                        suma += mat[of][oc];
                }
        }
        else if (baixar == 1) {
                while (of < df) {
                        ++of;
                        suma += mat[of][oc];
                }
        }
        else if (baixar == 0) {
                while (of > df) {
                        --of;
                        suma += mat[of][oc];
                }
        }
       
       
        return suma;
}
 
void read_matrix(Matriu& M) {
        int f = M.size();
        int c = M[0].size();
        for (int i = 0; i < f; ++i) {
                for (int j = 0; j < c; ++j) {
                        cin >> M[i][j];
                }      
        }      
}
 
int main() {
        int f, c;
        cin >> f >> c;
        Matriu M(f, vector<int> (c));
        read_matrix(M);
        int x, y, suma = 0;
        bool primer = true;
        int of, oc;
        while (cin >> x >> y) {
                if (primer) {
                        suma = M[x][y];
                        primer = false;
                }
                else {
                        suma += suma_linia(M, of, oc, x, y);
                }
                of = x;
                oc = y;
        }
        cout << "suma = " << suma << endl;
}
