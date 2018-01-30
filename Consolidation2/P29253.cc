//Nombres romans (2)
#include <iostream>
 using namespace std;
 
int main(){
  char prev, next;
  while (cin >> next){
    int sum = 0;
    prev = next;
    while (next != '.'){
      cin >> next;
      if (prev == 'M') sum = sum + 1000;
      if (prev == 'D') sum = sum + 500;
      if (prev == 'C'){
        if (next == 'M' or next == 'D') sum = sum - 100;
        else sum = sum + 100;
      }
      if (prev == 'L') sum = sum + 50;
      if (prev == 'X'){
        if (next == 'L' or next == 'C') sum = sum - 10;
        else sum = sum + 10;
      }
      if (prev == 'V') sum = sum + 5;
      if (prev == 'I'){
        if (next == 'V' or next == 'X') sum = sum - 1;
          else sum = sum + 1;
      }
      cout << prev;
      prev = next;
    }
    cout << " = " << sum << endl;
  }
}
