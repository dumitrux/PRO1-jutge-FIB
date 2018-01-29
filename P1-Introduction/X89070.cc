//Suma del mínimo y el máximo de tres enteros
#include <iostream>
using namespace std;


int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int min, max;
    min = max = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (b > max) max = b;
    if (c > max) max = c;
    
    cout << min + max << endl;
}
