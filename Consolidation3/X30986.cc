//Ordenant paraules
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
struct Frecuencia {
        string palabra;
        int frec;
};
typedef vector<Frecuencia>palabraFrecuente;
 
bool criterio_ord(const Frecuencia& v1, const Frecuencia& v2) {
        if (v1.frec > v2.frec) return true;
        if (v1.frec < v2.frec) return false;
        return (v1.palabra < v2.palabra);
 
}
 
int main() {
  int n;
  while (cin >> n) {
    vector<string>v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    sort(v.begin(),v.end());
    palabraFrecuente Frecuencias(n);
    Frecuencias[0].palabra = v[0];
    int k = 0;
    for (int i = 0; i < n; ++i) {
      if (Frecuencias[k].palabra != v[i]) {
        ++k;
        Frecuencias[k].palabra = v[i];
        Frecuencias[k].frec = 1;
      }
      else ++Frecuencias[k].frec;
    }
  palabraFrecuente FrecuenciasDef(k+1);
  for (int i = 0; i < k+1; ++i) {
    FrecuenciasDef[i].palabra = Frecuencias[i].palabra;
    FrecuenciasDef[i].frec = Frecuencias[i].frec;
  }
  sort(FrecuenciasDef.begin(), FrecuenciasDef.end(),criterio_ord);
  for (int i = 0; i < k+1; ++i) cout << FrecuenciasDef[i].frec << " " << FrecuenciasDef[i].palabra << endl;
  cout << "----------" << endl;
  }
}
