//Diagonals creixents
#include <iostream>
#include <vector>
using namespace std;
 
 
typedef vector<int> Row;
typedef vector<Row> Matrix;
 
 
//Pre: Llegeix una sequencia de valors
//Post: Omple la matriu amb aquests;
void read_matrix(Matrix& M) {
        int f = M.size();
        int c = M[0].size();
        for (int i = 0; i < f; ++i) {
                for (int j = 0; j < c ; ++j) {
                        cin >> M[i][j];
                }
        }
}
 
//Pre: Consulta les diagonals de la matriu a partir del punt a,b
//Post: Retorna true si i nomes si esta ordenat creixentment
bool increasing_d(const Matrix& M, int a, int b) {
        int f = M.size();
        int c = M[0].size();
        //dalt-dreta
        int i = a-1, j = b+1, comp = M[a][b];
        while (i >= 0 && j < c) {
                if (M[i][j] > comp) comp = M[i][j];
                else return false;
                --i;
                ++j;
        }
        //dalt-esquerra
        i = a-1, j = b-1, comp = M[a][b];
        while (i >= 0 && j >= 0) {
                if (M[i][j] > comp) comp = M[i][j];
                else return false;
                --i;
                --j;
        }
        //baix-esquerra
        i = a+1, j = b-1, comp = M[a][b];
        while (i < f && j >= 0) {
                if (M[i][j] > comp) comp = M[i][j];
                else return false;
                ++i;
                --j;
        }
        //baix-dreta
        i = a+1, j = b+1, comp = M[a][b];
        while (i < f && j < c) {
                if (M[i][j] > comp) comp = M[i][j];
                else return false;
                ++i;
                ++j;
        }
        return true;
}
 
int main() {
        int f, c;
        while (cin >> f >> c) { //Tamany matriu
                Matrix M(f, Row(c));
                read_matrix(M);
                cin >> f >> c; //Posicio inicial
                if (increasing_d(M, f, c)) cout << "si" << endl;
                else if (not increasing_d(M, f, c)) cout << "no" << endl;
        }
}
