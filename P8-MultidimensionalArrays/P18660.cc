//Sopa de lletres
#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
 
struct Dir {
        int x, y;
};
 
struct Pos  {
        int x, y;
};
 
 
typedef vector<char> Row;
typedef vector<Row> Matrix;
 
 
bool found(const Matrix& M, string s, const Pos& p, const Dir& d) {
        int f = M.size();
        int c = M[0].size();
        int i = p.x;
        int j = p.y;
        int tam_s = s.size();
        for (int k = 0; k < tam_s; ++k) {
                if (i < f && j < c) {
                        if (M[i][j] != s[k] && char(M[i][j] - 'a' + 'A') != s[k]) return false;
                        i += d.x;
                        j += d.y;
                }
                else return false;
        }
        return true;
}
 
void change_word(Matrix& M, string s, const Pos& p, const Dir& d) {
        int f = M.size();
        int c = M[0].size();
        int i = p.x;
        int j = p.y;
        int tam_s = s.size();
        for (int k = 0; k < tam_s; ++k) {
                if (i < f && j < c) {
                        if (M[i][j] >= 'a' && M[i][j] <= 'z') M[i][j] = char(M[i][j] - 'a' + 'A');
                }
                i += d.x;
                j += d.y;
        }
}
 
void read_words(vector<string>& v) {
        int tam = v.size();
        for (int i = 0; i < tam; ++i) cin >> v[i];
}
 
void read_matrix(Matrix& M) {
        int f = M.size();
        int c = M[0].size();
        for (int i = 0; i < f; ++i) {
                for (int j = 0; j < c; ++j) {
                        cin >> M[i][j];
                }
        }
}
 
void write_matrix(Matrix& M) {
        int f = M.size();
        int c = M[0].size();
        for (int i = 0; i < f; ++i) {
                for (int j = 0; j < c; ++j) {
                        if (j != 0) cout << ' ';
                        cout << M[i][j];
                }
                cout << endl;
        }
}
 
int main() {
        int n, f, c;
        bool first = true;
        while (cin >> n >> f >> c) {
                vector<string> v(n);
                read_words(v);
                Matrix M(f, Row(c));
                read_matrix(M);
                Dir vertical;
                Dir horitzontal;
                Dir diagonal;
                vertical.x = 1;
                vertical.y = 0;
                horitzontal.x = 0;
                horitzontal.y = 1;
                diagonal.x = 1;
                diagonal.y = 1;
                Pos pos;
                Matrix aux = M;
                for (int k = 0; k < n; ++k) {
                        for (pos.x = 0; pos.x < f; ++pos.x) {
                                for (pos.y = 0; pos.y < c; ++pos.y) {
                                        if (found(M, v[k], pos, vertical)) change_word(aux, v[k], pos, vertical);
                                        if (found(M, v[k], pos, horitzontal)) change_word(aux, v[k], pos, horitzontal);
                                        if (found(M, v[k], pos, diagonal)) change_word(aux, v[k], pos, diagonal);
                                }
                        }
                }
                if (not first) cout << endl;
                else first = false;
                write_matrix(aux);
        }
}
