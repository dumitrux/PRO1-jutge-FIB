//Bars (1)
#include <iostream>
using namespace std;
 
 
void ast_barres(int n) {
        if (n == 1) cout << '*' << endl;
        else {
                ast_barres(n-1);
                for (int i = 0; i != n; ++i) cout << '*';
                cout << endl;
                ast_barres(n-1);
        }
}
 
int main() {
        int n;
        cin >> n;
        ast_barres(n);
}
