//Letra o número?
#include <iostream>
using namespace std;


int main () {
char c;
cin >> c;

if (char (int (c) >= int ('A') and int (c) <= int ('Z'))) 
cout << "Letra mayuscula" << endl;
else if (char (int (c) >= int ('a') and int (c) <= int ('z')))
cout << "Letra minuscula" << endl;
else cout << "Numero" << endl;
}
