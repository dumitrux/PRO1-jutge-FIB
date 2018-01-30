//Parells creixents
#include <iostream>
using namespace std;
 
int main() {
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i) {
                int cont = 0;
                int a, b;
                cin >> a;
                while (a > 0) {
                        cin >> b;
                        if (a < b) ++cont;
                        a = b;
                }
                cout << cont << endl;
        }
}
