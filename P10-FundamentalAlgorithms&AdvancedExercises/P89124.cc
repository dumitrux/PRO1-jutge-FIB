//Garbell d'Eratòstenes
#include <iostream>
#include <vector>
using namespace std;


const int MAX = 1000000;

int main() {
  vector <bool> v(MAX + 1, true);
  v[0] = false;
  v[1] = false;
  for (int i = 2; i*i <= MAX; ++i) {
    if (v[i]) {
      //for (int j = i + i; tambe es correcte.
     for (int j = i*2; j <= MAX; j = j + i) {
       v[j] = false;
     }
    }
  }
  int s;
  while (cin >> s) {
    cout << s << " ";
    if (v[s]) cout << "es primer";
    else cout << "no es primer";
    cout << endl;
  }
}
