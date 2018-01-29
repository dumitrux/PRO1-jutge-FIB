//Función para engrosar números
#include <iostream>
#include <cmath>
using namespace std;


int invers(int n) {
    int numero = 0;
    while (n != 0) {
        numero = numero*10 + (n%10);
        n /= 10;
    }
    return numero;
}


int numero_zeros(int x) {
    int contador = 0;
    if (x != 0) {
        while (x%10 == 0) {
            ++contador;
            x /= 10;
        }
    }
    return contador;
}


int engrosa(int x) {
    int max, zeros, resultat = 0;
    zeros = numero_zeros(x);
    x = invers(x);
    max = x%10;
    x /= 10;
    resultat = resultat*10 + max;
    while (x != 0) {
        int num;
        num = x%10;
        if (num < max) num = max;
        else max = num;
        resultat = (resultat*10) + max;
        x /= 10;
    }
    if (zeros != 0) {
        for (int i = 0; i < zeros; ++i) resultat = resultat*10 + max;
    }
    return resultat;
}


int main () {
    int n;
    while (cin >> n) {
        cout << engrosa(n) << endl;
    }
}
