//Tauler d'escacs (2)
#include <iostream>
using namespace std;


int main() {
	int f, c, tot = 0;
	cin >> f >> c;

	char mon;
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			cin >> mon;
			if ((j + i) % 2 == 0) {
				tot += mon - '0';
			}
		}
	}
	cout << tot << endl;
}
