//Control C201C
#include <iostream>
using namespace std;


int main () {
    int enter, seq, count = 0;
    cin >> enter;
    
    while (cin >> seq) {
        if (seq%enter == 0) ++count;
    }
    cout << count << endl;
}
