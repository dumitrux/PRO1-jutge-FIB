//Sumes de matrius quadrades
#include <iostream>
#include <vector>
using namespace std;


typedef vector< vector<int> > Matriu;

Matriu suma(const Matriu& a, const Matriu& b) {
    int f = a.size();
    int c = b.size();
    Matriu C(f, vector<int> (c));
    C = a;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            C[i][j] += b[i][j];
        }
    }
    return C;
}
