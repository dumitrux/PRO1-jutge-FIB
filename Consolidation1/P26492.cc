//Nombres equilibrats
#include <iostream>
using namespace std;


bool es_equilibrat(int n) {
    int sum_parell, sum_senar, digit;
    sum_parell = sum_senar = 0;
    
    for (int i = 0; n != 0; ++i) {
        digit = n%10;
        if (i%2 == 0) sum_parell += digit;
        else sum_senar += digit;
        n /= 10;
    }
    return (sum_parell == sum_senar);
}


int main() {
    int x;
    while (cin >> x) {
        cout << es_equilibrat(x) << endl;
    }
    
}
