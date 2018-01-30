//F001A. Alumnes de la FIPS
#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
struct Assignatura {
    string nom;                 // Nom de lassignatura
    double nota;                // Entre 0 i 10, -1 indica NP
};
 
struct Alumne {
    string nom;                 // Nom de lalumne
    int dni;                    // DNI de lalumne
    vector<Assignatura> ass;    // Llista dassignatures de lalumne
};
 
 
 
double nota(const vector<Alumne>& alums, int dni, string nom) {
    int n = alums.size();
    for (int i = 0; i < n; ++i) {
        if (alums[i].dni == dni) {
            int m = alums[i].ass.size();
            for (int j = 0; j < m; ++j) {
                if (alums[i].ass[j].nom == nom) return alums[i].ass[j].nota;
            }
        }
    }
    return -1;
}
 
double mitjana(const vector<Assignatura>& ass) {
    int n = ass.size();
    int num = 0;
    bool buit = true;
    double suma = 0;
    for (int i = 0; i < n; ++i) {
        if (ass[i].nota != -1) {
            suma += ass[i].nota;
            buit = false;
            ++num;
        }
    }
    if (buit) return -1;
    else return suma/double(num);
}
 
void compta(const vector<Alumne>& alums, int dni, string nom, int& com) {
    int n = alums.size();
    com = 0;
    double m = nota(alums, dni, nom);
    for (int i = 0; i < n; ++i) {
        double mitj = mitjana(alums[i].ass);
        if (mitj > m) ++com;
    }
}
 
int main() {
    int k;
    cin >> k;
    vector <Alumne> alums(k);
    for (int t = 0; t < k; ++t) {
        cin >> alums[t].nom >> alums[t].dni;
        int d;
        cin >> d;
        vector <Assignatura> ass(d);
        alums[t].ass = ass;
        for (int w = 0; w < d; ++w) {
            cin >> alums[t].ass[w].nom >> alums[t].ass[w].nota;
        }
    }
    int dni;
    string asign;
    while (cin >> dni >> asign){
        int com;
        compta(alums,dni,asign,com);
        cout << com << endl;
    }
}
