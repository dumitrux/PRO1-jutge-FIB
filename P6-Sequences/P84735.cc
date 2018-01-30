//Múltiple més petit
#include <iostream>
using namespace std;
 
int multiple_petit(int a, int b) {
        int m;
        if (a%b == 0) m = a;
        else m = (a/b)*b + b;
        return m;
}
 
int main() {
        int a, b;
        int countite = 1;
        while (cin >> a >> b) {
                cout << "#" << countite << " : " << multiple_petit(a,b) << endl;
                ++countite;
        }
}
