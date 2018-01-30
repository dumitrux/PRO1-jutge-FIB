//Intersecció de taules
#include <iostream>
#include <vector>
using namespace std;
 
typedef vector<double> Row;
 
Row interseccio(const Row&v1, const Row&v2) {
        int s1 = v1.size();
        int s2 = v2.size();
        int s3;
        if (s1 > s2) s3 = s2;
        else s3 = s1;
        Row aux(s3);
        int i, j, k;
        i = j = k = 0;
        while (i < s1 and j < s2) {
                if (v1[i] > v2[j]) ++j;
                else if (v1[i] < v2[j]) ++i;
                else if (k == 0 or aux[k-1] != v1[i]) {
                        aux[k] = v1[i];
                        ++i;
                        ++j;
                        ++k;
                }
                else {
                        ++i;
                        ++j;
                }
        }
        Row v3(k);
        for (i = 0; i < k; ++i) v3[i] = aux[i];
        return v3;
}
