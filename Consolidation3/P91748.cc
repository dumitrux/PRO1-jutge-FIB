//Quadrat llatí
#include <iostream>
#include <vector>
using namespace std;
 
typedef vector<int> Fila;
typedef vector<Fila> Quadrat;
 
bool fila(const Quadrat& q, int f) {
    int n = q.size();
    vector<bool> visto(n,false);
    for (int i = 0; i < n; ++i) {
        if (q[f][i] != 0 and q[f][i] <= n) {
            if (not visto[q[f][i] - 1]) visto[q[f][i] - 1] = true;
            else return false;
        }
        else return false;
    }
    return true;
}
 
bool columna(const Quadrat& q, int c) {
    int n = q.size();
    vector<bool> visto(n,false);
    for (int i = 0; i < n; ++i) {
        if (q[i][c] != 0 and q[i][c] <= n) {
            if (not visto[q[i][c] - 1]) visto[q[i][c] - 1] = true;
            else return false;
        }
        else return false;
    }
    return true;
}  
 
bool es_llati(const Quadrat& q) {
    int n = q.size();
    for (int i = 0; i < n; ++i) {
        if (not fila(q, i) or not columna(q, i)) return false;
    }
    return true;
}
