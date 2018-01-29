//Cuántas hola hay?
#include <iostream>
#include <string>
using namespace std;


int main () {
string s;
int i = 0;

while (cin >> s) {
	if (s == "hola") ++i;
}
cout << i << endl;
}
