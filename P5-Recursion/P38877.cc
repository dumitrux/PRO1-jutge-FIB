//Girant una llista de paraules (4)
#include <iostream>
using namespace std;
 
void girar(int n, int& i){
        string c;
        if (cin >> c){
                girar(n, i);
                if (i <= n){
                        cout << c << endl;
                        ++i;
                }
        }
        else i = 1;
}
 
int main(){
        int n;
        cin >> n;
        girar(n, n);
}
