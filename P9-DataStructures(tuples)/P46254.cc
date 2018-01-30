//Distància entre dos punts
#include <iostream>
#include <cmath>
using namespace std;

struct Punt {
    double x,y;
};

double distancia(const Punt& a, const Punt& b) {
    double d;
    d = (b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y);
    d = sqrt(d);
    return d;
}
