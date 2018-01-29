//Rectángulos (1)
#include <iostream>
using namespace std;


int main() {
    int n, m;
    bool primer = true;
    while (cin >> n >> m) {
        if (primer) primer = false;
        else cout << endl;
        int x;
        x = (n+m)%5;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << x;
            }
            cout << endl;
        }
    }
}
