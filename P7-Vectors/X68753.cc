//Moda
#include <iostream>
#include <vector>
using namespace std;
 
 
void moda(int n, const vector<int>& p) {
        int comp = 0;
        int major;
        int moda_aux;
        for (int i = 0; i < n; ++i) {
                int rep = 0;
                for (int j = 0; j < n; ++j) {
                        if (p[i] == p[j]) {
                                ++rep;
                                if (rep > comp) {
                                        moda_aux = p[i];
                                        major = p[i];
                                        comp = rep;
                                }
                                else if (rep == comp) {
                                        if (p[i] > moda_aux) {
                                                moda_aux = p[i];
                                                major = p[i];
                                                comp = rep;
                                        }
                                }
                        }
                }
        }
        cout << major << endl;
}
 
 
//Pre: Llegeix diverses seqüčncies de nombres
//Post: Escriu la moda de cada seq.
int main() {
        int n;
        while (cin >> n) {
                vector<int> p(n);
                for (int i = 0; i < n; ++i) {
                        cin >> p[i];
                }
                moda(n, p);
        }
}
