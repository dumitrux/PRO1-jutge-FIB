//L'amic invisible
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
struct Participant {
    string nom;
    int saldo;
};
 
typedef vector<Participant> Gent;
 
bool ordre_saldo(Participant a, Participant b) {
    if (a.saldo == b.saldo) return a.nom <= b.nom;
    return a.saldo < b.saldo;
}
 
bool ordre_nom(Participant a, Participant b) {
        return a.nom >= b.nom;
}
 
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        Gent g(2*m);
        for (int j = 0; j < 2*m; j += 2) {
            Participant p, q;
            cin >> p.nom >> q.nom;
            int saldo;
            cin >> saldo;
            p.saldo = -1*saldo;
            q.saldo = saldo;
            g[j] = p;
            g[j + 1] = q;
        }
        sort(g.begin(), g.end(), ordre_nom);
        Gent g2(m);
        for (int j = 0; j < m; ++j) {
                Participant p;
                p.nom = g[2*j].nom;
                p.saldo = g[2*j].saldo + g[2*j + 1].saldo;
                g2[j] = p;
        }
        sort(g2.begin(), g2.end(), ordre_saldo);
                for (int j = 0; j < m; ++j) cout << g2[j].nom << ' ' << g2[j].saldo << endl;
                cout << endl;
    }
}
