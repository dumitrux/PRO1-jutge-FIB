//Girant una llista de paraules (3)
#include <iostream>
#include <string>
using namespace std;


void llegir(int n) {
  if (n > 0) {
    string s;
    cin >> s;
    --n;
    llegir(n);
    cout << s << endl;
  }
}


int main() {
  int n;
  cin >> n;
  llegir(n);
}
