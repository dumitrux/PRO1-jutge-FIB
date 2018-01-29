//Funció per als anys de traspàs
#include <iostream>
using namespace std;


bool es_any_de_traspas(int any) {
    return((any%4 == 0 and any%100 != 0) or (any%100 == 0 and(any/100)%4 == 0));
}
