//Nombres perfectes
#include <iostream>
using namespace std;


bool es_perfecte(int n) {
    int divisor = 1;
    for (int i = 2; i*i <= n; ++i) {
        if (n%i == 0) divisor += i + n/i;
    }
    return (divisor == n and n != 0 and n != 1);
}
