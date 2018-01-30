//Girant una llista de paraules (1)
#include <iostream>
using namespace std;


void invers() {
    string s;
    if (cin >> s) {
        invers();
        cout << s << endl;
    }
}


int main() {
    invers();
}
