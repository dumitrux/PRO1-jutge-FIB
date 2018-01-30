//Igual a l'últim
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, cont = 0;
    cin >> n;
    vector<int> S(n);
    for (int i = 0; i < n; ++i) {
        cin >> S[i];
    }
    for (int j = 0; j < n - 1; ++j) {
        if (S[j] == S[n - 1]) ++cont;
    }
    cout << cont << endl;
}
