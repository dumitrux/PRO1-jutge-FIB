//Avaluació de polinomis (2)
#include <iostream>
using namespace std;
 
int main () {
  cout.setf (ios::fixed);
  cout.precision(4);
 
  //Metodo de Horner
  //CASO QUE LA LISTA DE NUMEROS SEA DIFERENTE DEL VACIO
  double punto;
  cin >> punto;
  double numero;
  double sumador = 0;
  while (cin >> numero){
    sumador = (sumador*punto) + numero;
  }
  cout << sumador << endl;
}
