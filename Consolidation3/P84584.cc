//Racionals (2)
#include <iostream>
using namespace std;
 
int mcd(int a, int b){
        if (a%b == 0) return b;
        return mcd(b, a%b);
}
 
struct Racional {
        int num, den;
};
 
Racional normalitza(int& n, int& d){
        Racional r;
        if (n == 0) d = 1;
        else{
                int x = mcd(n, d);
                n = n/x;
                d = d/x;
                if (d < 0){
                        d *= -1;
                        n *= -1;
                }
        }
        r.num = n;
        r.den = d;
        return r;
}
 
void escriu_racional(const Racional& r){
        cout << r.num;
        if (r.den != 1) cout << "/" << r.den;
}
 
void llegeix_racional(Racional& r, bool& final){
        if (cin >> r.num >> r.den){
                normalitza(r.num, r.den);
               
                final = false;
        }
        else final = true;
}
