//Jutge (2)
#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
const string VERD = "verd";
const string GROC = "groc";
const string VERMELL = "vermell";
 
struct Enviament {
        string dni; // DNI de l'alumne que ha fet l'enviament
        string exer; // Nom de l'exercici
        int temps; // Temps des de l'obertura del jutge
        string res; // Resultat de l'exercici
};
 
struct Exercici {
        string exer; // Nom de l'exercici
        int num; // Numero que identifica enviaments o  nombre d'alumnes
                 // o temps maxims
};
 
struct Resultats {
        Exercici envverds; // Exercici amb mes enviaments verds
        Exercici alverds; // Exercici amb mes alumnes que han tingut verd
        Exercici alverms; // Exercici amb mes alumnes que han tingut vermell
        Exercici alin; // Exercici amb mes intents d'estudiants diferents
        Exercici maxtemp; // Exercici de l'ultim enviament
};
 
typedef vector<Enviament> Historia;
 
// PRE: Cap
// POST: S'han llegit tots els camps de l'enviament
void llegeix_env(Enviament&e) {
        cin >> e.dni >> e.exer >> e.temps >> e.res;
}
 
// PRE: 0 <= i < v.size()
// POST: S'ha llegit l'enviament h[i]
void llegeix_hist(Historia&h, int i) {
        Enviament e;
        llegeix_env(e);
        h[i] = e;
}
 
// PRE: Cap
// POST: Retorna true si el nom de l'exercici de l'enviament 'a' ĂŠs mĂŠs petit
//       estricte que el de l'enviament 'b', false si es mes gran estricte.
//       En cas que siguin iguals, retorna true si el DNI de l'estudiant de
//       l'enviament 'a' es mes petit estricte que el DNI de l'estudiant de
//       l'enviament 'b' i false altrament.
bool es_mes_petit(const Enviament&a, const Enviament&b) {
        if (a.exer == b.exer) return a.dni < b.dni;
        return a.exer < b.exer;
}
 
// PRE: 0 <= e <= m <= d < v.size() i v[e...m], v[m+1...d] son subvectors
//      ordenats
// POST: El subvector v[e...m] s'ha fusionat amb el subvector v[m+1...d]
//       donant lloc a un subvector v[e...d] que esta ordenat creixentment
//       segons les condicions que determina la funcio 'es_mes_petit'
void fusiona(Historia&v, int e, int m, int d) {
        int n = d - e + 1;
        Historia aux(n);
        int i = e;
        int j = m + 1;
        int k = 0;
        // INV: El subvector v[e...i-1] s'ha fusionat amb el subvector
        //      v[m+1...j-1] donant lloc al subvector aux[0...k-1] que conte
        //      la fusio dels dos subvectors anteriors amb els elements ordenats
        //      per les condicions que determina la funcio 'es_mes_petit'
        while (i <= m and j <= d) {
                if (es_mes_petit(v[i], v[j])) {
                        aux[k] = v[i];
                        ++i;
                }
                else {
                        aux[k] = v[j];
                        ++j;
                }
                ++k;
        }
        // INV: IDEM while anterior
        while (i <= m) {
                aux[k] = v[i];
                ++i;
                ++k;
        }
        // INV: IDEM while anterior
        while (j <= d) {
                aux[k] = v[j];
                ++j;
                ++k;
        }
        // S'ha copiat el subvector aux[0...k-1] al subvector v[e...k-1]
        for (k = 0; k < n; ++k) v[k + e] = aux[k];    
}
 
// PRE: 0 <= e <= d < v.size()
// POST: Els elements de v[e...d] son els inicials pero ordenats creixentment
void ordena_per_fusio(Historia&v, int e, int d) {
        if (e < d) {
                int m = (e + d)/2;
                ordena_per_fusio(v, e, m);
                ordena_per_fusio(v, m + 1, d);
                fusiona(v, e, m, d);
        }
}
 
// PRE: v es un vector ordenat segons les condicions de la funcio
//      'es_mes_petit'
// POST: Retorna un struct Resultats on
//       r.envverds conte l'Exercici amb mes enviaments verds
//       (i el nombre d'enviaments verds corresponent)
//       r.alverds conta l'Exercici amb mes alumnes verds
//       (i el nombre d'alumnes verds corresponent)
//       r.alverms conte l'Exercici amb mes alumnes vermells
//       (i el nombre d'alumnes vermells corresponent)
//               r.alin conte l'Exercici que mes alumnes han intentat
//       (i el nombre d'intents corresponent)
//       r.maxtemp conte l'Exercici de l'ultim enviament
//       (i el temps de l'ultim enviament)
//       on Exercici es l'struct Exercici
Resultats calcula_resultats(const Historia&v) {
        int i = 0;
        Exercici maxtemp, envverds, alverds, alverms, alin;
        maxtemp.num = envverds.num = alverds.num = alverms.num = alin.num = 0;
        // INV: exer conte el nom de l'exercici de l'enviament v[i-1]
        //      auxenverds, auxalin, auxalverds, auxalverms contenen
        //      respectivament el nombre d'enviaments verds, alumnes que han
        //      intentat l'exercici, alumnes verds i alumnes vermells de
        //      l'exercici exer en v[0...i-1]
        //      alverds, alverms, alin, envverds contenen respectivament
        //      el nombre d'enviaments/alumnes i el nom dels exercicis
        //      que tenen mes alumnes verds, alumnes vermells, alumnes que l'han
        //      intentat i enviaments verds respectivament (s'enten un exercici
        //      per cada un, el que te mes alumnes de cada)
        while (i < v.size()) {
                string exer = v[i].exer;
                int auxenvverds, auxalin, auxalverds, auxalverms;
                auxenvverds = auxalin = auxalverds = auxalverms = 0;
                // INV: alum conte el DNI de l'alumne de l'enviament v[i]
                //      hihaverd, hihagroc, hihavermell contenen true si l'alumne
                //      v[i].dni ha tingut un enviament verd, groc o vermell
                //      respectivament, i false altrament
                while (i < v.size() and v[i].exer == exer) {
                        string alum = v[i].dni;
                        bool hihaverd, hihagroc, hihavermell;
                        hihaverd = hihagroc = hihavermell = false;
                        // INV: maxtemp conte el nom de l'exercici de
                        //      l'ultim enviament en v[0...i-1] i el temps de l'enviament
                        while (i < v.size() and v[i].exer == exer and v[i].dni == alum) {
                                if (v[i].res == GROC) hihagroc = true;
                                if (v[i].res == VERMELL) hihavermell = true;
                                if (v[i].res == VERD) {
                                        ++auxenvverds;
                                        hihaverd = true;
                                }
                                if (v[i].temps > maxtemp.num) {
                                        maxtemp.exer = exer;
                                        maxtemp.num = v[i].temps;
                                }
                                ++i;
                        }
                        if (hihaverd) ++auxalverds;
                        if (hihavermell and not hihaverd and not hihagroc) ++auxalverms;
                        ++auxalin;
                }
                if (auxalverds > alverds.num) {
                        alverds.num = auxalverds;
                        alverds.exer = exer;
                }
                if (auxalverms > alverms.num) {
                        alverms.num = auxalverms;
                        alverms.exer = exer;
                }
                if (auxalin > alin.num) {
                        alin.num = auxalin;
                        alin.exer = exer;
                }
                if (auxenvverds > envverds.num) {
                        envverds.num = auxenvverds;
                        envverds.exer = exer;
                }
        }
        Resultats r;
        r.envverds = envverds;
        r.alverds = alverds;
        r.alverms = alverms;
        r.alin = alin;
        r.maxtemp = maxtemp;
        return r;
}
 
int main() {
        int n;
        cin >> n;
        Historia h(n);
        for (int i = 0; i < n; ++i) llegeix_hist(h, i);
       
        ordena_per_fusio(h, 0, h.size() - 1);
        Resultats r = calcula_resultats(h);
       
        cout << "exercici amb mes enviaments verds:     ";
        if (r.envverds.num != 0) cout << r.envverds.exer << " (" << r.envverds.num
                                      << ')' << endl;
        else cout << '-' << endl;
       
        cout << "exercici amb mes alumnes verds:        ";
        if (r.alverds.num != 0) cout << r.alverds.exer << " (" << r.alverds.num
                                     << ')' << endl;
        else cout << '-' << endl;
       
        cout << "exercici amb mes alumnes vermells:     ";
        if (r.alverms.num != 0) cout << r.alverms.exer << " (" << r.alverms.num
                                     << ')' << endl;
        else cout << '-' << endl;
       
        cout << "exercici que mes alumnes han intentat: ";
        if (r.alin.num != 0) cout << r.alin.exer << " (" << r.alin.num
                                  << ')' << endl;
        else cout << '-' << endl;
       
        cout << "exercici de l'ultim enviament:         ";
        if (r.maxtemp.num != 0) cout << r.maxtemp.exer << endl;
        else cout << '-' << endl;
}
