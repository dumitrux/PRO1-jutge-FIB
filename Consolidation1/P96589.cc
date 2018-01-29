//Control C101C
#include <iostream>
using namespace std;
 
int main() {
   char x;
   cin >> x;
   if ((x>='0') and (x<='9')) cout << "digit" << endl;
   else if (((x>='a')and(x<='z')) or ((x>='A')and(x<='Z'))) cout << "lletra" << endl;
   else cout << "res" << endl;
}
