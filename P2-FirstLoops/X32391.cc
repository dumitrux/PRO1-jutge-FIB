//Asignación (2)
#include <iostream>
using namespace std;


int main () {
    int d, n, t, a;
    cin >> d >> n >> t;
    int count = 0;
    
    for (int i = 0; i < t; ++i) {
        cin >> a;
        if (n + a > d) ++count;
        n = n + a - d;
    }
    cout << count << endl;
}
