//Next prime number
#include <iostream>
using namespace std;


bool es_primer(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; ++i) {
        if (n%i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    while (es_primer(n)) {
        bool primer = false;
        int seguentp = n + 1;
        while (!primer) {
            primer = es_primer(seguentp);
            if (primer) cout << seguentp << endl;
            else ++seguentp;
        }
        cin >> n;
    }
}
