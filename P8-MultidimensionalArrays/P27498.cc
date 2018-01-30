//Matriu transposta
#include <iostream>
#include <vector>
using namespace std;


typedef vector< vector<int> > Matriu;

void swap(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}

void transposa(Matriu& m) {
    int n = m.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(m[i][j], m[j][i]);
        }
    }
}
