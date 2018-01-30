//Paraules entre altres dues
#include <iostream>
#include <string>
using namespace std;


int main () {
	string paraula;
	bool principi = false;
	int cont = 0;
	
	while (cin >> paraula and paraula != "final") {
		if (principi) ++cont;
		else if (paraula == "principi") principi = true;
	}
	if (principi and paraula == "final") cout << cont << endl;
	else cout << "sequencia incorrecta" << endl;
}
