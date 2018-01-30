//Control C302E
#include <iostream>
using namespace std;


char complement(char c) {
  if (c == 'A')return 'T';
  else if (c == 'T')return 'A';
  else if (c == 'C')return 'G';
  else return 'C';
  
}


int main() {
  char c1, c2, c3;
  cin >> c1 >> c2;
  bool trobat = false;
  while (not trobat and cin >> c3){
    trobat = (c1 == 'T' and c2 == 'A' and c3 == 'G');
    c1 = c2;
    c2 = c3;
  }
  if (trobat){
    while (cin >> c3) {
      cout << complement(c3);
    }
  }
  cout << endl;
}
