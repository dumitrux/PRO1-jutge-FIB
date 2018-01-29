//Nombres harmònics (2)
#include <iostream>
using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(10);
    
    double n, m;
    while (cin >> n >> m) {
        double H = 0.0;
        for (int i = m + 1 ; i <= n; ++i) {
            H += 1.0 / i;
        }
        cout << H << endl;
    }
}
