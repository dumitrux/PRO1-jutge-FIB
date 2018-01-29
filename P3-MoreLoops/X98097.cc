//Posicions senars i parelles relacionades
#include <iostream>
using namespace std;
 

int main() {
        int n, p = 0, s = 0;
        cin >> n;
    	for (int i = 0; n != 0; ++i) {
        	if (i%2 == 0) p += n%10;
        	else s += n%10;
        	n /= 10;
    	}

	cout << p << ' ' << s << endl;
     	if (p >= s and s != 0) {
                if (p%s != 0) cout << "res" << endl;
                else cout << p << " = " << p/s << " * " << s << endl;
        }else if (s >= p and p != 0) {
                if (s%p != 0) cout << "res" << endl;
                else cout << s << " = " << s/p << " * " << p << endl;
        }else if (s == 0 or p == 0) {
                if (s == 0) cout << "0 = 0 * " << p << endl;
                else if (p == 0) cout << "0 = 0 * " << s << endl;
        }
}
