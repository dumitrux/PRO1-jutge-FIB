//Cerca dicotòmica
#include <iostream>
#include <vector>
using namespace std;
 
 
int posicio(double x, const vector<double>& v, int esq, int dre) {
	if (esq > dre) return -1;
	int mid = (esq+dre)/2;
	if (x < v[mid]) return posicio(x, v, esq, mid-1);
	if (x > v[mid]) return posicio(x, v, mid+1, dre);
	return mid;
}
