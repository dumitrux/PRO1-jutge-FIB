//Girant una llista de paraules (2)
#include <iostream>
#include <string>
using namespace std;


void invers() {
    string paraula;
    cin >> paraula;
    if (paraula != "fi") {
        invers();
        cout << paraula << endl;
    }
}


int main() {
    string s;
    invers();
}
