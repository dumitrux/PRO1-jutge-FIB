//Intervals (1)
#include <iostream>
using namespace std;


int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    
    if (b1 < a2 or a1 > b2) cout << "[]";
    else {
        cout << '[';
        if (a1 >= a2) cout << a1;
        else cout << a2;
        cout << ',';
        if (b1 <= b2) cout << b1;
        else cout << b2;
        cout << ']';
    }
    cout << endl;
}
