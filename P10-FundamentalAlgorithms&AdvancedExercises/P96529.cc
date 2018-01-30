//Claus i parèntesis
#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main() {
        string s;
        while (cin >> s) {
                int n=s.size();
                vector<char> v(n, '0');
                int k=0;
                bool z=true;
                for (int i=0; i<n and z; ++i) {
                        if (s[i]=='(' or s[i]=='[') {
                                v[k]=s[i];
                                ++k;
                        }
                        else {
                                --k;
                                if ((s[i]==')' and v[k]!='(') or (s[i]==']' and v[k]!='[')) z=false;
                        }
                }
                if (z and k==0) cout << "si" << endl;
                else cout << "no" << endl;
        }
}
