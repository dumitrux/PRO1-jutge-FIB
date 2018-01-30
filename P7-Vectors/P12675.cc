//Elements comuns
#include <iostream>
#include <vector>
using namespace std;


int elements_comuns(const vector<int>& X, const vector<int>& Y) {
    int tamx, tamy, comuns, i, j;
    tamx = X.size();
    tamy = Y.size();
    comuns = i = j = 0;
    
    while (i < tamx and j < tamy) {
        if (X[i] > Y[j]) ++j;
        else if (X[i] < Y[j]) ++i;
        else {
            ++i;
            ++j;
            ++comuns;
        }
    }
    return comuns;
}
