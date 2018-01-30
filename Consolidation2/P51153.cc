//Parells d'una seqüència (2)
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int x;
    while (cin >> x) {
        vector<int> v(x);
        for (int i = 0; i < x; ++i) cin >> v[i];
        bool ya = false;
        for (int j = 0; j < x and not ya; ++j) {
            if (j > 0) {
                if ((v[j] + v[j - 1])%2 != 0) ya = true;
            }
        }
        if (ya) cout << "si" << endl;
        else cout << "no" << endl;
    }
}
