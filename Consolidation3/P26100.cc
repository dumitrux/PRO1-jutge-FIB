//El joc de la vida (1)
#include <iostream>
#include <vector>
using namespace std;
 
typedef vector<char> Fila;
typedef vector<Fila> Matriu;
 
int bact_adj(const Matriu&joc, int i, int j) {
        int n = joc.size();
        int m = joc[0].size();
        int addi = i + 1;
        int subi = i - 1;
        int addj = j + 1;
        int subj = j - 1;
        bool paddi = addi < n;
        bool psubi = subi >= 0;
        bool paddj = addj < m;
        bool psubj = subj >= 0;
        int bact = 0;
        if (paddi and psubj and joc[addi][subj] == 'B') ++bact;
        if (paddi and joc[addi][j] == 'B') ++bact;
        if (paddi and paddj and joc[addi][addj] == 'B') ++bact;
        if (paddj and joc[i][addj] == 'B') ++bact;
        if (psubi and joc[subi][j] == 'B') ++bact;
        if (psubj and joc[i][subj] == 'B') ++bact;
        if (psubi and psubj and joc[subi][subj] == 'B') ++bact;
        if (psubi and paddj and joc[subi][addj] == 'B') ++bact;
        return bact;
}
 
Matriu tracta_joc(const Matriu&joc) {
        int n = joc.size();
        int m = joc[0].size();
        Matriu pjoc(n, Fila(m));
        pjoc = joc;
        for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                        int k = bact_adj(joc, i, j);
                        if (joc[i][j] == '.') {
                                if (k == 3) pjoc[i][j] = 'B';
                        }
                        else {
                                if (k != 2 and k != 3) pjoc[i][j] = '.';
                        }
                }
        }
        return pjoc;
}
 
int main() {
        int n, m;
        bool primer = true;
        while (cin >> n >> m and n != 0 and m != 0) {
                Matriu joc(n, Fila(m));
                for (int i = 0; i < n; ++i) {
                        for (int j = 0; j < m; ++j) cin >> joc[i][j];
                }
                joc = tracta_joc(joc);
                if (primer) primer = false;
                else cout << endl;
                for (int i = 0; i < n; ++i) {
                        for (int j = 0; j < m; ++j) cout << joc[i][j];
                        cout << endl;
                }      
        }
}
