//Matriu simètrica
#include <iostream>
#include <vector>
using namespace std;


typedef vector< vector<int> > Matriu;

bool es_simetrica(const Matriu& m) {
    int n = m.size();
    
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j){
            if (m[i][j] != m[j][i]) return false;
        }
    }
    return true;
}
