//Suma de quadrats
#include <iostream>
using namespace std;

int main () {
    int n;
    int result = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        result += i*i;
    }
    cout << result << endl;
}
