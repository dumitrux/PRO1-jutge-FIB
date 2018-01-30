//Racionals (3)
#include <iostream>
using namespace std;
 
struct Racional {
    int num,den;
};
 
int mcd(int a, int b) {
    if (b==0) return a;
    return mcd(b,a%b);
}
 
Racional racional(int n, int d) {
    Racional res;
    res.num = n / mcd(n,d);
        res.den = d / mcd(n,d);
    if (res.num==0) res.den = 1;
    if (res.den<0) {
                res.den*=-1;
                res.num*=-1;
    }
    return res;
}
 
Racional suma(const Racional& a, const Racional& b) {
        int mcm = (a.den*b.den)/mcd(a.den, b.den);
        int n1 = a.num*(mcm/a.den);
        int n2 = b.num*(mcm/b.den);
        return racional (n1+n2, mcm);
}
 
Racional resta(const Racional& a, const Racional& b) {
        int mcm = (a.den*b.den)/mcd(a.den, b.den);
        int n1 = a.num*(mcm/a.den);
        int n2 = b.num*(mcm/b.den);
        return racional (n1-n2, mcm);
}
 
Racional producte(const Racional& a, const Racional& b) {
        int n = a.num*b.num;
        int d = b.den*a.den;
        return racional(n, d);
}
 
Racional divisio(const Racional& a, const Racional& b) {
        int n = a.num*b.den;
        int d = a.den*b.num;
        return racional(n, d);
               
}
 
void suma_un(Racional& r) {
        r.num += r.den;
}
