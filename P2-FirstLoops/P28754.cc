//Número del revés en binari
#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    if (n == 0) cout << 0;
    while (n != 0) {
        cout << n%2;
        n = n/2;
    }
    cout << endl;
}
