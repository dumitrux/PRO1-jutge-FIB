//Matrius de paraules
#include <iostream>
#include <vector>
using namespace std;

typedef vector<string> Fila;
typedef vector<Fila> Matriu;

int nombre_de_paraules(const Matriu& m, char c, int k) {
  int cont = 0;
  int tam = m.size();
  for (int i = 0; i < tam ; ++i) {
    for (int j = 0; j < m[i].size();++j) {
     if (k < m[i][j].length() and m[i][j][k] == c) ++cont;
    }
  }
  return cont;
}
