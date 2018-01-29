//Classificació de caràcters (1)
#include <iostream>
using namespace std;


int main() {
    char c;
    cin >> c;
    
    if (c >= 'A' and c <= 'Z') cout << "majuscula";
    else cout << "minuscula";
    cout << endl;
    if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or c == 'A' or 
            c == 'E' or c == 'I' or c == 'O' or c == 'U') cout << "vocal";
    else cout << "consonant";
    cout << endl;
}
