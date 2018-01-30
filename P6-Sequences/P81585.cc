//Com la suma dels demés (I)
#include <iostream>
using namespace std;


int main() {
    int k;
    while (cin >> k) {
        int seq, max = 0, suma = 0;
        for (int i = 0; i < k; ++i) {
            cin >> seq;
            if (seq > max) max = seq;
            suma += seq;
        }
        if (max == (suma - max)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
