//Elementos
#include <iostream>
using namespace std;


int main() {
    char a, b;
    cin >> a >> b;
    
    if (a == b) cout << "-";
    else if ((a == 'A' and b == 'P') or (a == 'V' and b == 'A') or 
            (a == 'P' and b == 'V')) cout << "1";
    else cout << "2";
    cout << endl;
}
