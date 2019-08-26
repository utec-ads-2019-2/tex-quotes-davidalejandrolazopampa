/*
#include <iostream>
#include <string>
#include <map>

using namespace std;
int main() {
    string line;
    map<string, int> lista;
    map<string, int>::iterator dav;
    //Cantidad
    int n;
    cin >> n;
    //Leer el resto de palabras
    getline(cin, line);
    while (n--) {
        getline(cin, line);
        if (cin.eof())
            break;
        string pais = line.substr(0, line.find(' '));
        dav = lista.find(pais);
        if (dav != lista.end()) {
            lista[pais] = dav->second + 1;
        } else {
            lista[pais] = 1;
        }
    }
    for (dav = lista.begin(); dav != lista.end(); dav++) {
        cout<<dav-> first <<" "<< dav->second << endl;
    }
}*/
#include <iostream>
int main()
{
    //eof entrada archivo
    int prim, second = 1;
    //getchar : lee caracter del teclado y regresa
    while((prim=getchar()) != EOF) {
        if(prim == '"') {
            printf("%s", second?"``":"''");
            second= !second;
        } else
            printf("%c", prim,"\n");
    }
    return 0;
}