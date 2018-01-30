//Com la suma dels demés (II)
#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    while(cin >> n) {
        vector<int> v(n);
        int suma = 0;
        for (int i = 0; i < n; ++i){
            cin >> v[i];
            suma += v[i];
        }
        bool trobat = false;
        int i = 0;
        while (!trobat and i < n) {
            trobat = (v[i] == suma - v[i]);
            ++i;
        }
        if (trobat) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
