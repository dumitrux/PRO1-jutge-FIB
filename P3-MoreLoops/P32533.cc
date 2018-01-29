//Control C202E
#include <iostream>
using namespace std;


int main() {
	int n, m;
	cin >> n;

	m = n;
	for (int i = 0; i < m; ++i) {
		for (int j = 1; j < n; ++j) cout << "+";
		cout << "/";
		for (int k = m; k > n; --k) cout << "*";
		cout << endl;
		--n;
	}
}
