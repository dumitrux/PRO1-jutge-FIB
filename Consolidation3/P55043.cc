//Rius digitals
#include <iostream>
using namespace std;
 
 
int suma_digits(int n) {
        int suma_digits = 0;
        while (n != 0) {
                suma_digits += n%10;
                n /= 10;
        }
        return suma_digits;
}
 
 
int trobada_de_rius(int n) {
        int riu_1 = 1;
        int riu_3 = 3;
        int riu_9 = 9;
        while (riu_1 != n && riu_3 != n && riu_9 != n) {
                if (riu_1 < n) riu_1 += suma_digits(riu_1);
                else if (riu_3 < n) riu_3 += suma_digits(riu_3);
                else if (riu_9 < n) riu_9 += suma_digits(riu_9);
                else n += suma_digits(n);
        }
        return n;
}
