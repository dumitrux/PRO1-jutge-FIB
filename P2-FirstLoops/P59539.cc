//Nombres harmònics (1)
#include <iostream>
using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
     
     
    int n;
    cin >> n;
    
    double H;
    
    for (int i = 1; i <= n; ++i) {
        H += 1.0/i;
    }
    cout << H << endl;
}
