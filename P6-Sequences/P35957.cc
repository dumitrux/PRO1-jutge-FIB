//Dígits centrals
#include <iostream>
using namespace std;
 
int digits(int x) {
        int i = 0;
        while (x > 0) {
            x /= 10;
            ++i;
        }
        return i;
}
 
int central(int x) {
        if (x < 10) return x;
        int i = 1;
        int n = digits(x)/2 + 1;
        while (i < n) {
            x /= 10;
            ++i;
        }
        x %= 10;
        return x;
}
       
 
 
int main() {
        int n;
        cin >> n;
        int i = 0;
        bool r = false;
        bool primera = true;
        int x, m;
        while ((cin >> x) and (i < 2*n) and (!r)) {
                ++i;
                if (x > 9 and digits(x)%2 == 0) r = true;
                else if (primera) {
                        primera = false;
                        m = central(x);
                }
                if (m != central(x)) r = true;
        }
        if (!r) cout << "=" << endl;
        else if (i%2 == 0) cout << "A" << endl;
        else cout << "B" << endl;
}
