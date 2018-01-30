//F011B. Palíndroms més llargs
#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
bool es_palindrom(const string& s){
    int n = s.size();
    for (int i = 0; i < n; ++i){
        if (s[i] != s[n-1-i]) return false;
    }
    return true;
}
void omple(vector<string>& v){
        for(int i = 0; i < v.size(); ++i){
                cin >> v[i];
        }
}
int main(){
        int n;
       
        string pal;
        cout << "-----" << endl;
        while(cin >> n and n != 0){
                int max = 0;
                vector<string> v(n);
                omple(v);
                for (int i = 0; i < n; ++i){
                        if(es_palindrom(v[i])){
                                if (v[i].size() > max){
                                        max = v[i].size();
                                }
                        }
                }
                bool cap = true;
                for (int i = 0; i < n; ++i){
                        if(es_palindrom(v[i]) and v[i].size() == max){
                                cout << v[i] << endl;
                                cap = false;
                        }
                }
                if(cap) cout << "cap palindrom" << endl;
                cout << "-----" << endl;
        }
}
