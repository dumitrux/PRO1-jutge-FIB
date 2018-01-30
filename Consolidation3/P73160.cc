//Torneig de tennis
#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
string guanyador(const vector<string>& nom, const vector<bool>& guanya) {
    int n = nom.size();
    int posicio = 0;
    while (posicio < n - 1) {
        if (guanya[posicio]) posicio = posicio*2 + 1;
        else posicio = posicio*2 + 2;
    }
    posicio = posicio + 1 - n;
    return nom[posicio];
}
