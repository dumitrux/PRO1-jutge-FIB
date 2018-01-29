//Mínimo de tres enteros diferentes
#include <iostream>
using namespace std;


int main() {
    int a, b, c, min;
    cin >> a >> b >> c;
    min = a;
    if (min > b) min = b;
    if (min > c) min = c;
    cout << min << endl;
}
