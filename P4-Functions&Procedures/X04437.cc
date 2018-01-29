//Distància a l'origen
#include <iostream>
#include <cmath>
using namespace std;


double dist_or(double x, double y) {
    return sqrt(x*x+y*y);
}

int main() {
    double x, y;
    cin >> x >> y;
    cout << dist_or(x, y) << endl;
}
