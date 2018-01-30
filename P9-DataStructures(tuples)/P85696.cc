//Racionals (1)
#include <iostream>
using namespace std;
 
 
struct Racional {
        int num, den;
};
 
Racional racional(int n, int d) {
        Racional rac_norm;
        if (n == 0) {
                rac_norm.den = 1;
                rac_norm.num = 0;
                return rac_norm;
        }
        else {
                bool negar;
                if (n*d > 0) {
                        if (n < 0) {
                                n *= -1;
                                d *= -1;
                        }
                        negar = false;
                }
                else {
                        if (d < 0) d *= -1;
                        else n *= -1;
                        negar = true;
                       
                }
                int petit;
                if (n < d) petit = n;
                else petit = d;
                for (int div = petit; div >= 2; --div) {
                        if (n%div == 0 && d%div == 0) {
                                n /= div;
                                d /= div;
                        }
                }
                if (not negar) rac_norm.num = n;
                else if (negar) rac_norm.num = n * -1;
                rac_norm.den = d;
                return rac_norm;
        }
}
 
 
int main() {
        int n, d;
        cin >> n >> d;
        Racional frac_norm = racional(n, d);
        cout << frac_norm.num << "/" << frac_norm.den << endl;
}
