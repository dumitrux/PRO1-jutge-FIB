//Primera posició
#include <iostream>
using namespace std;


int main() {
    int seq, cont = 1;
    while (cin >> seq and seq%2 != 0) {
        ++cont;
    }
    cout << cont << endl;
}
