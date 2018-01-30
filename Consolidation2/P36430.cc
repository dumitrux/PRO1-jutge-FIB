//Fermat's last theorem (1)
#include <iostream>
#include <cmath>
using namespace std;
 
 
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool solucio_trobada = false;
   
    for (int i = a; i <= b and not solucio_trobada ; ++i) {
        for (int j = c; j <= d and not solucio_trobada; ++j) {
            double n = sqrt(i*i + j*j);
            int num = int(n);
            if (n == double(num)) {
                cout << i << "^2 + " << j << "^2 = "
                     << num << "^2" << endl;
                solucio_trobada = true;
     
            }
        }
    }
    if (not solucio_trobada) {
        cout << "No solution!" << endl;
    }
}
