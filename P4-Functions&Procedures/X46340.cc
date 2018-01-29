//Función para la suma del mínimo y el máximo de tres enteros
#include <iostream>
using namespace std;


int sum_min_max(int x, int y, int z) {
    int max, min;
    max = min = x;
    if (max < y) max = y;
    if (max < z) max = z;
    if (min > y) min = y;
    if (min > z) min = z;
    return min+max;
}
