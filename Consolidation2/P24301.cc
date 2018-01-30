//Concatenació de vectors
#include <iostream>
#include <vector>
using namespace std;


vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2) {
    vector<int> V = v1;
    for (int i = 0; i < v2.size(); ++i) {
        V.push_back(v2[i]);
    }
    return V;
}
