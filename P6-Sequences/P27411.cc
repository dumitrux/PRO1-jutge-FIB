//I-èsim (2)
#include <iostream>
using namespace std;


int main() {
    int i, seq, pos = 0;
    cin >> i;
    while (pos != i and cin >> seq and seq != -1 ) {
        ++pos;
    }
    if (i == 0) cout << "Posicio incorrecta." << endl;
    else if (pos == i) cout << "A la posicio " << i << " hi ha un " << seq << "." << endl;
    else cout << "Posicio incorrecta." << endl;
}
