//Control C202F
#include <iostream>
using namespace std;
 
int main() {
   int x, y, t = 0;
   cin >> x;
   cout << "nombres que acaben igual que " << x << ':' << endl;
   x = x%1000;
   while (cin >> y) {
    if (x == y%1000) {
        ++t;
        cout << y << endl;
    }
   }
   cout << "total: " << t << endl;
}
