//Sumes màximes
#include <iostream>
#include <vector>
using namespace std;
 
 
//Pre: Llegeix seqüčncies d'n enters
//Post: Escriu la mŕxima quantitat que es pot obtenir sumant des de cada costat
int main() {
        int n, x;
        while (cin >> n) {
                vector<int> maxs(n);
                int maxed = 0; //Mŕxim esquerra-dreta
                int sumed = 0; //Suma esquerra-dreta
                int maxde = 0; //Mŕxim dreta-esquerra
                int sumde = 0; //Suma dreta-esquerra
                for (int i = 0; i < n; ++i) {
                        cin >> x;
                        maxs[i] = x;
                        sumed = sumed + x;
                        if (sumed > maxed) maxed = sumed;
                }
                for (int i = n-1; i >= 0; --i) {
                        sumde = sumde + maxs[i];
                        if (sumde > maxde) maxde = sumde;
                }
                cout << maxed << ' ' << maxde << endl;
        }
}
