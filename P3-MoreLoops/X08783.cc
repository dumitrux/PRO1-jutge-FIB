//Cuántas cifras?
#include <iostream>
using namespace std;


int main () {
    int b, n;
    int count = 0;
    
    while (cin >> b >> n) {
        while (n != 0) {
            n = n / b;
            ++count;
        }
        cout << count << endl;
        count = 0;
    }
}
