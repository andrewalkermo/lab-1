#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main() {
    map<string,double>  carteiras;
    int c, t;
    cin >> c >> t;

    for (int i = 0; i < c; i++) {
        string carteira;
        double valor;
        cin >> carteira >> valor;
        carteiras[carteira] = valor;
    }

    for (int i = 0; i < t; i++) {
        string origem, destino;
        double valor;
        cin >> origem >> destino >> valor;
        carteiras[origem] -= valor;
        carteiras[destino] += valor;
    }

    for(map<string,double>::iterator it=carteiras.begin(); it != carteiras.end(); it++) {
        cout << (*it).first << ' ' << fixed << setprecision(6) << (*it).second << endl;
	}

}
