//Codis ISBN
#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    string s;
    while (cin >> s){
        int incog = 0, suma = 0;
        for (int i = 0; i < s.size(); ++i){
            if (s[i] >= '0' and s[i] <= '9') suma = suma + (10 - i) * (s[i] - '0');
            else if (s[i] == 'X') suma = suma + (10 - i) * 10;
            else if (s[i] == '?') incog = 10 - i;            
        }
        bool trobat = false;
        int j = 0;
        while (not trobat and j <= 10){
            if ( (suma + j * incog) % 11 == 0) trobat = true;
            else ++j;
        }
        if (j == 10) cout << "X" << endl;
        else cout << j << endl;
    }
}
