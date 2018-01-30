//I-èsim (3)
#include <iostream>
using namespace std;


int main() {
    int n, seq, pos = 1;
    cin >> n;
    bool found = false;
    while (not found and cin >> seq) {
        if (pos == n) found = true;
        else ++pos;
    }
    if (found) cout << "A la posicio " << n << " hi ha un " << seq << "." << endl;
    else cout << "Posicio incorrecta." << endl;
}
