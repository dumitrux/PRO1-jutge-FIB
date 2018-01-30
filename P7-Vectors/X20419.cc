//Longitud media y palabra mas frecuente
#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
const int LONG_ALFABET = 'z' - 'a' + 1;
 
char lletra_mes_frequent(const string& s) {
        vector <int> lmf(LONG_ALFABET, 0);
        int tams = s.size();
        for (int i = 0; i < tams; ++i) {
                ++lmf[s[i]-'a'];
        }
        int pos, freq = 0;
        for (int i = 0; i < LONG_ALFABET; ++i) {
                if (lmf[i] > freq) {
                        pos = i;
                        freq = lmf[i];
                }
        }
        char c = 'a' + pos;
        return c;
}



int main() {
        cout.setf(ios::fixed);
        cout.precision(2);
        
        int n;
        double longitut = 0;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; ++i) {
                cin >> v[i];
                longitut += v[i].length();
        }
        longitut = longitut/n;
        cout << longitut << endl;
        for (int i = 0; i < n; ++i) {
                if (v[i].length() >= longitut) {
                        cout << v[i] << ": " << lletra_mes_frequent(v[i]) << endl;
                }
        }
}
