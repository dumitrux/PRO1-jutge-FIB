//Posiciones de un maximo en dos secuencias
#include <iostream>
using namespace std;
 
 
void infoSequencia(int& max, int& lpos) {
        if (lpos > max) max = lpos;
}
 
int main() {
        int n1, lpos, count = 0, pos, max = 0;
        while (cin >> n1 && n1 != 0) {
                lpos = n1;
                infoSequencia(max, lpos);
                ++count;
                if (max == lpos) pos = count;
        }
        cout << max << ' ' << pos << ' ';
        int n2, pos2 = 1;
        while (cin >> n2 && n2 != max && n2 != 0) {
                ++pos2;
        }
        if (n2 == max) cout << pos2 << endl;
        else cout << '-' << endl;
}
