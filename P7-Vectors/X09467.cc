//Rampes
#include <iostream>
#include <vector>
using namespace std;
 
 
vector<bool> pos_rampas (const vector<int>& v) {
        int n = v.size();
        vector<bool> pos_rampas(n);
        for (int i = 0; i < n-2; ++i) {
                if (v[i] > v[i+1] && v[i+1] > v[i+2]) pos_rampas[i] = true;
                else if (v[i] < v[i+1] && v[i+1] < v[i+2]) pos_rampas[i] = true;
                else pos_rampas[i] = false;
        }
        return pos_rampas;
}
 
int pot_conflictives (const vector<bool>& v) {
        int conflictives = 0;
        int tam_v = v.size();
        for (int i = 0; i < tam_v; ++i) {
                if (v[i] == true && v[i+1] == true) ++conflictives;
                if (v[i] == true && v[i+2] == true) ++conflictives;
        }
        return conflictives;
}
 
 
int main() {
        int n;
        while (cin >> n) {
                vector<int> v(n);
                for (int i = 0; i < n; ++i) cin >> v[i];
                vector<bool> u = pos_rampas(v);
                cout << "posicions amb rampa:";
                for (int i = 0; i < n; ++i) {
                        if (u[i] == true) cout << " " << i;
                }
                cout << endl;
                cout << "potencialment conflictives: " << pot_conflictives(u) << endl;
                cout << "---" << endl;
        }
}
