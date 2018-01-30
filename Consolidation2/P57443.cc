//Codis de barres
#include <iostream>
using namespace std;


int main() {
string numero;
while(cin >> numero){
    int suma = 0;
    for(int i=11; i>=0; i--){
        if(i%2==0) suma = suma + (numero[i]-48);
        else suma = suma + ((numero[i]-48) * 3);
    }
    int digit = 10 - suma%10;
    if (digit == 10) digit = 0;
    cout << numero << digit << endl;
    }
}
