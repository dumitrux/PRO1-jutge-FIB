//Capicues
#include <iostream>
using namespace std;


bool es_capicua(int n) {
    int x, girar = 0;
    x = n;
    while (x != 0) {
        girar = girar*10 + x%10;
        x /= 10;
    }
    return n == girar;
}
