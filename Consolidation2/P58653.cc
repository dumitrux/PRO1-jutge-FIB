//Classificació de caràcters (2)
#include <iostream>
using namespace std;


void escriu_linia(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "cert" << endl;
    else cout << "fals" << endl;
}


int main () {
    char c;
    cin >> c;
    bool b;
    string s;
    
    if ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z')) {
        b = true;
        s = "lletra";
        escriu_linia(c, s, b);
        
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'or 
            c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U') {
            b = true;
            s = "vocal";
            escriu_linia(c, s, b);
            b = false;
            s = "consonant";
            escriu_linia(c, s, b);
        }
        else {
            b = false;
            s = "vocal";
            escriu_linia(c, s, b);
            b = true;
            s = "consonant";
            escriu_linia(c, s, b);
        }
        
        if (c >= 'a' and c <= 'z') {
            b = false;
            s = "majuscula"; escriu_linia(c, s, b);
            b = true;
            s = "minuscula"; escriu_linia(c, s, b);
        }
        
        else {
            b = true;
            s = "majuscula"; escriu_linia(c, s, b);
            b = false;
            s = "minuscula"; escriu_linia(c, s, b);
        }
        b = false;
        s = "digit"; escriu_linia(c, s, b);
    }
    else if (c >= '0' and c <= '9') {
        b = false;
        s = "lletra"; escriu_linia(c, s, b);
        s = "vocal"; escriu_linia(c, s, b);
        s = "consonant"; escriu_linia(c, s, b);
        s = "majuscula"; escriu_linia(c, s, b);
        s = "minuscula"; escriu_linia(c, s, b);
        b = true;
        s = "digit"; escriu_linia(c, s, b);
    }
    
    else {
           b = false;
        s = "lletra"; escriu_linia(c, s, b);
        s = "vocal"; escriu_linia(c, s, b);
        s = "consonant"; escriu_linia(c, s, b);
        s = "majuscula"; escriu_linia(c, s, b);
        s = "minuscula"; escriu_linia(c, s, b);
        s = "digit"; escriu_linia(c, s, b);
    }
}
