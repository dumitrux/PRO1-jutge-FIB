//F002B. Vectors comprimits
#include <iostream>
#include <vector>
using namespace std;
 
struct Parell {
    int valor;
    int pos;
};
 
typedef vector<Parell> Vec_Com;
 
Vec_Com suma(const Vec_Com& v1, const Vec_Com& v2) {
        int n1 = v1.size();
        int n2 = v2.size();
        Vec_Com v3(n1 + n2);
        int i, j, k;
        i = j = k = 0;
        while (i < n1 and j < n2) {
                if (v1[i].pos < v2[j].pos) {
                        v3[k] = v1[i];
                        ++i;
                        ++k;
                }
                else if (v1[i].pos > v2[j].pos) {
                        v3[k] = v2[j];
                        ++j;
                        ++k;
                }
                else if (v1[i].valor + v2[j].valor != 0) {
                        v3[k].pos = v1[i].pos;
                        v3[k].valor = v1[i].valor + v2[j].valor;
                        ++i;
                        ++j;
                        ++k;
                }
                else {
                        ++i;
                        ++j;
                }
        }
        while (i < n1) {
                v3[k] = v1[i];
                ++i;
                ++k;
        }
        while (j < n2) {
                v3[k] = v2[j];
                ++j;
                ++k;
        }
        Vec_Com r(k);
        for (int x = 0; x < k; ++x) r[x] = v3[x];
        return r;
}
 
void llegeix(Vec_Com& v) {
        int n = v.size();
        char a;
        for (int i = 0; i < n; ++i) cin >> v[i].valor >> a >> v[i].pos;
}
 
int main() {
        int k;
        cin >> k;
        for (int i = 0; i < k; ++i) {
                int n;
                cin >> n;
                Vec_Com a(n);
                llegeix(a);
                cin >> n;
                Vec_Com b(n);
                llegeix(b);
                Vec_Com r = suma(a, b);
                cout << r.size();
                for (int x = 0; x < r.size(); ++x) {
                        cout << " " << r[x].valor << ";" << r[x].pos;
                }
                cout << endl;
        }
}
