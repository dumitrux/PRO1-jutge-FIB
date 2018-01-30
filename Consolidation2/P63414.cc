//Comptant freqüències
#include <iostream>
#include <vector>
using namespace std;


const int NUM = 1000000000;
//vecotor de 1001, ja que el rang va de 1.000.000.000 fins a 1.000.001.000.
int main () {
  // vector<tipus enter> v incialitzem a 0.
  vector<int> v(1001,0);
  int n;
  cin >> n;
  
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    ++v[x - NUM]; // Equivalent a v[x - NUM] = v[x - NUM] + 1;
  }
  
  for (int i = 0; i < 1001; ++i) {
    if (v[i] != 0) cout << NUM + i << " : " << v[i] << endl;
  }
}
