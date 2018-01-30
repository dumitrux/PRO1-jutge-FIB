//Cerca seqüencial en una taula
#include <iostream>
#include <vector>
using namespace std;


bool hi_es(int x, const vector<int>& v) {
    bool trobat = false;
    for (int i = 0; i < v.size() and !trobat ;++i) {
        trobat = v[i] == x;
    }
    return trobat;
}
