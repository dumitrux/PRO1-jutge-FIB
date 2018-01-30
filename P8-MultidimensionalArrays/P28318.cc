//Files i columnes
#include <iostream>
#include <vector>
using namespace std;


typedef vector< vector<int> > Matrix;


void read_mat(Matrix& mat) {
    int f = mat.size();
    int c = mat[0].size();
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) cin >> mat[i][j];
    }
}


int main() {
    int n, m;
    cin >> n >> m;
    Matrix mat(n, vector<int> (m));
    read_mat(mat);
    
    string cons;
    while (cin >> cons) {
        int x;
        if (cons == "fila") {
            cin >> x;
            cout << "fila " << x << ":";
            for (int i = 0; i < m; ++i) cout << " " << mat[x-1][i];
        }
        else if (cons == "columna") {
            cin >> x;
            cout << "columna " << x << ":";
            for (int j = 0; j < n; ++j) cout << " " << mat[j][x-1];
        }
        else {
            int y;
            cin >> x >> y;
            cout << "element " << x << " " << y << ": " << mat[x-1][y-1]; 
        }
        cout << endl;
    }
}
