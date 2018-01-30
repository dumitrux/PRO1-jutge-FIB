//Codi Cèsar
#include <iostream>
using namespace std;
 
char codificat(char c, int k) {
    if (c == '_') c = ' ';
    else if ('a' <= c and c <= 'z') {
        c = c - 'a';
        if (k > 26) k = k%26;
        c = 'A' + k + c;
        while (c > 'Z') c -= 26;
    }
    return c;
}
 
int main() {
    char c;
    int k;
    while (cin >> k) {
        while (cin >> c and c != '.') cout << codificat(c, k);
        cout << endl;
    }
}
