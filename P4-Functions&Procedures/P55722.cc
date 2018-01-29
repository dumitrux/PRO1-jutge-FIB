//Nombre de dígits iteratiu
#include <iostream>
using namespace std;


int nombre_digits(int n) {
	int cont = 1;
	while (n > 9) {
		n /= 10;
		++cont;
	}
	return cont;
}
