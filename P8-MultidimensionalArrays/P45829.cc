//Camps
#include <iostream>
#include <vector>
using namespace std;


typedef vector< vector<int> > Matrix;

void read_mat(Matrix& m, int f, int c) {
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) cin >> m[i][j];
    }
}


void C(Matrix& m, int x, int y) {
    for (int i = x; i < m.size(); ++i) {
        if (m[i][y] != 0) {
            for (int j = y; j < m[0].size(); ++j) {
                if (m[i][j] != 0) m[i][j] = 0;
                else j = m[0].size();
            }
        }
        else i = m.size();
    }
}

int main() {
    int f, c;
    while (cin >> f >> c) {
        Matrix m(f, vector<int>(c));
        read_mat(m, f, c);
        
        int cont = 0;
        for (int i = 0; i < f; ++i) {
            for (int j = 0; j < c; ++j) {
                if (m[i][j] != 0) {
                    C(m, i , j);
                    ++cont;
                }
            }
        }
        cout << cont << endl;
    }
}
