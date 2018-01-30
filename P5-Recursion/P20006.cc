//Expressió prefixada
#include <iostream>
 using namespace std;
 
int op(){
        char c;
        cin >> c;
        if (c == '+') return op() + op();
        if (c == '-') return op() - op();
        if (c == '*') return op()*op();
        return c - '1' + 1;
}
 
int main(){
        cout << op() << endl;
}
