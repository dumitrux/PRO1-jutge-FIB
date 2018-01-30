//Parells d'una seqüència (1)
#include <iostream>
#include <vector>
using namespace std;


bool es_primer(int n) {
  if (n < 2) return false;
  for (int i = 2; i*i <= n; ++i) {
    if (n%i == 0) return false;
  }
  return true;
}


int main() {
  int n;
  while (cin >> n) {
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    int i = 0;
    bool trobat = false;
    while (i < n - 1 and not trobat){
      int j = i + 1;
      while ( j < n and not trobat){
	if (i != j) trobat = es_primer(v[i]+v[j]);
	++j;
      }
      ++i;
    }
    if (trobat)cout << "si" << endl;
    else cout << "no" << endl;
  }
}
