//Mínim comú múltiple
#include<iostream>
using namespace std;
 
long long mcd(long long a, long long b) {
    if(a < b) return mcd(b,a);
    if(b == 0) return a;
    return mcd(b, a % b);
}
 
long long mcm(long long a, long long b) {
    long long p = (a*b)/mcd(a,b);
    return p;
}
 
 
//Pre: LLegeix dos nombres
//Post: Fa el mcm a partir del mcd del problema anterior
int main() {
    long long x;
    while (cin >> x and x != 0) {
        long long a, b, m;
        a = 1;
        while (x > 0) {
            cin >> b;
            m = mcm(a,b);
            a = m;
            --x;
        }
        cout << m << endl;
    }
}
