//Girant una llista de paraules (6)
#include <iostream>
using namespace std;
 
 
void girar_llista(int& count) {
        string x;
        if (cin >> x) {
                ++count;
                girar_llista(count);
                if (count <= 0) cout << x << endl;
                count = count - 2;
        }
}
 
int main() {
        int count = 0;
        girar_llista(count);
}
