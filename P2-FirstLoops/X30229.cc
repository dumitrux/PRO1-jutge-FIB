//Asignación (3)
#include <iostream>
using namespace std;


int main() {
    int as, ap, n, d, i = 1;
    cin >> as >> ap >> n;
    
    while (cin >> d) {
        if (i%2 != 0) {
            n += as - d;
        }
        else n += ap - d;
        cout << n << endl;
        ++i;
    }
}
