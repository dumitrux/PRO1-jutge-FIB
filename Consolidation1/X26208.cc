//Rectangles (3)
#include <iostream>
using namespace std;
 
int main() {
    int n, x, y, r;
    bool primer = true;
    cin >> n >> x >> y;
    for (int z=0; z<n; ++z) {
            if (primer) primer = false;
            else cout << endl;
            r = 100;
        for (int i=0; i<x; ++i) {
            for (int j=0; j<y; ++j) {
                --r;
                cout << r%10;
            }
            cout << endl;
        }
    }
}
