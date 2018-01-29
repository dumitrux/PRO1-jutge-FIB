//Quants segons són?
#include <iostream>
using namespace std;


int main() {
    int a, d, h, m , s;
    cin >> a >> d >> h >> m >> s;
    cout << s + 60*m + 3600*h + 24*3600*d + a*365*3600*24 << endl;
}
