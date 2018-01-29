//Tablero de ajedrez (4)
#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    char mon;
    int blanc, neg;
    blanc = neg = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mon;
            if ((i+j)%2 == 0) blanc += mon - '0';
            else neg += mon - '0';
        }
    }
    cout << blanc << "-" << neg << " = " << blanc-neg << endl;
}
