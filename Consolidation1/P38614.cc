//Control C201A
#include <iostream>
using namespace std;


int main () {
    int n, suma = 0;
    cin >> n;
    cout << n;
    
    while (n != 0) {
        suma += n%10;
        n /= 100;
    }
    if (suma%2 == 0) cout << " ES TXATXI" << endl;
    else cout << " NO ES TXATXI" << endl;
}
